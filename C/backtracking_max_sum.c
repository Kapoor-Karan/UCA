#include <stdio.h>

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int print_path(int mat[3][3], int i, int j, int sum) {

    if (i >= 3 || j >= 3) {
        return sum;
    }

    sum += mat[i][j];
    
    if (i == 2 && j == 2) {
        return sum;
    }

    int a = print_path(mat, i + 1, j, sum);

    int b = print_path(mat, i, j + 1, sum);

    return max(a, b);
}

int main() {
    int mat[3][3] = {{1, 0, 0}, {1, 1, 1}, {0, 1, 0}};

    printf("%d",print_path(mat, 0, 0, 0));
    return 0;
}
