void push(int arr[], int n, int value){
    arr[n] = value;
}

int pop(int arr[], int n){
    int temp = arr[n - 1];
    arr[n - 1] = -1;
    return temp;
}
