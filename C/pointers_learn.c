#include <stdio.h>

int main(){
	//int a = 1324234230;
	//int* b = &a;
	//char* c = &a;
	//printf("%d\n" , *b);
	//printf("%d" , *c);
	int arr[5]={1,2,3,4,5};
	int* ptr = arr;
	for(int i=0;i<6;i++){
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	for(int i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
}
