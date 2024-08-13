#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

int* array = NULL;
int front = 0;
int rear = 0;
int max_size = 1;

void resize_array(int new_size) {
    int* new_array = (int*)malloc(new_size * sizeof(int));

    for (int i = 0; i < rear - front; i++) {
        new_array[i] = array[front + i];
    }
    
    int* temp = array;
    array = new_array;
    rear -= front; 
    front = 0; 
    free(temp);
}

void enqueue(int item) {
    if (rear == 0) {
        resize_array(max_size);
    } else if (rear == max_size) {
        resize_array(2 * max_size);
        max_size *= 2;
    }
    array[rear++] = item;
}

int dequeue() {
    if (isEmpty()) return -10000;
    
    int item = array[front++];
    
    if (size() > 0 && size() == max_size / 4) {
        max_size /= 2;
        resize_array(max_size);
    }
    
    return item;
}

int size() {
    return rear - front;
}

bool isEmpty() {
    return front == rear;
}

void testQueue() {
    enqueue(3);
    enqueue(10);
    enqueue(12);
    
    assert(isEmpty() == false);
    assert(size() == 3);
    assert(dequeue() == 3);
    assert(size() == 2);
    assert(dequeue() == 10);
    assert(dequeue() == 12);
    assert(isEmpty() == true);
    assert(size() == 0);
}

int main() {
    testQueue();
    printf("All tests passed.\n");
    return 0;
}
