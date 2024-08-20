void push(int arr[], int n, int value){
    for(int i = n - 1; i >= 0; i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
}

int pop(int arr[], int n){
    int temp = arr[0];
    for(int i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    return temp;
}