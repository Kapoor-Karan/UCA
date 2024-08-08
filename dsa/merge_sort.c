#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>

void exch(int arr[], int i, int j){
    int temp = arr[i];

    arr[i] = arr[j];
    arr[j] = temp;
}

void merge(int arr[], int aux[], int left, int mid, int right){
    for(int k=left; k <= right; k++) aux[k] = arr[k];
    int i = left;
    int j = mid+1;
    for(int k =left; k <= right; k++){
        if(i > mid) arr[k] = aux[j++];
        else if(j>right) arr[k] = aux[i++];
        else if(aux[i] <= aux[j]) arr[k] = aux[i++];
        else arr[k] = aux[j++];
    }

}

void merge_sort_recursive(int arr[],int aux[], int left, int right){
    if(left >= right) return;

    int mid = (left+right) / 2;
    merge_sort_recursive(arr, aux, left, mid);
    merge_sort_recursive(arr, aux, mid+1, right);
    merge(arr, aux, left, mid, right);

}

void merge_sort(int arr[],int n){
    int* aux = (int *) malloc(n * sizeof(int));

    merge_sort_recursive(arr,aux,0,n-1);
    free(aux);
}

void test_simple_input(){
    int arr[] = {3 ,1 ,7 ,9 ,5};
    int expected_output[] = {1 ,3 ,5 ,7 ,9};

    merge_sort(arr, 5);
    for(int i = 0; i < 5; i++) assert(arr[i] == expected_output[i]);
}

int main(){
    test_simple_input();
    // srand(time(NULL));

    // int k = 32000;
    // int *arr1 = (int *) malloc(sizeof(int)*k);
    // for(int i = 0; i < k; i++) arr1[i] = rand();
    // long long t1 = calculate_runtime(arr1, k);

    // k = 64000;
    // int *arr2 = (int *) malloc(sizeof(int)*k);
    // for(int i = 0; i < k; i++) arr2[i] = rand();
    // long long t2 = calculate_runtime(arr2, k);

    // printf("%lf\n", t2*1.0 / t1);
    return 0;
}