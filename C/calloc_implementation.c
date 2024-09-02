#include <stdio.h>
#include <stdlib.h>

int *custom_calloc(int n) {
    int *arr = (int *)(malloc(4 * n));

    for (int i = 0; i < n; i++){
        arr[i] = 0;
    }

    return arr;
}

int main() {
    int n;

    scanf("%d", &n);
    
    int *arr = custom_calloc(n);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}