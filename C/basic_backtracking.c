#include <stdio.h>

void print_path(int mat[3][3], int i, int j, char arr[], int x) {

    if (i >= 3 || j >= 3) {
        return;
    }

    arr[x] = mat[i][j] + '0';  
    arr[x + 1] = '\0';         

    if (i == 2 && j == 2) {
        printf("%s\n", arr);
        return;
    }

    print_path(mat, i + 1, j, arr, x + 1);

    print_path(mat, i, j + 1, arr, x + 1);
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    char arr[6];  

    print_path(mat, 0, 0, arr, 0);
    return 0;
}
