#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "stack.h"

int* array = NULL;
int N = 0;
int max_size = 1;

void resize_array(int new_size)
{
    int* new_array = (int *) malloc(new_size * sizeof(int));
    for(int i = 0; i < N; i++) new_array[i] = array[i];

    int* temp = array;
    array = new_array;
    free(temp);
}

void push(int item)
{
	if(N==0)
    {
        resize_array(max_size);
    }
    else if(N == max_size) 
    {
        resize_array(2*max_size);
        max_size *= 2;
    }
    array[N++] = item;
}
int pop()
{
    if(isEmpty()) return -10000;
    int item = array[--N];
    if(size()>0 && size() == max_size/4)
    {
        max_size /= 2;
        resize_array(max_size);
    }
    return item;
}

int size()
{
	return N;
}

bool isEmpty()
{
	return N == 0;
}


int testStack()
{
	push(3);
	push(10);
	push(12);
	
	assert(isEmpty() == false);
	assert(size() == 3);
	assert(pop() == 12);
	assert(size() == 2);

}

int main()
{
	testStack();
	return 0;
}

