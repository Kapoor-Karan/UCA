#include <stdio.h>

int main() {
    // int num = 42;
    // double pi = 3.14159;
    // char str[] = "Hello, stdout!";

    // fprintf(stdout, "Integer: %d\n", num);
    // fprintf(stdout, "Floating-point: %f\n", pi);
    // fprintf(stdout, "String: %s\n", str);

    // return 0;
    
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    int num = 42;
    double pi = 3.14159;
    char str[] = "Hello, File!";

    fprintf(file, "Integer: %d\n", num);
    fprintf(file, "Floating-point: %f\n", pi);
    fprintf(file, "String: %s\n", str);

    fclose(file);

    return 0;
}