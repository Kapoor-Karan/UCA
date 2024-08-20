#include <stdio.h>

int maxCard(int a, int b){
    int c = a - b;
    int x = (c >> 31) & 1;
    int ans = a - (x * c);
    return ans;
}

// int isSame(char x, char y){
//     if(x ^ y == 0){
//         return 0;
//     }else{
//         return 1;
//     }
// }

int main(){
    int a , b;
    char x, y;

    scanf("%c %c", &x, &y);
    scanf("%d %d", &a, &b);
    printf("%d\n", maxCard(a,b));

    if((x ^ y) == 0){
        printf("Cards are same\n");
    }else{
        printf("Cards are not same\n");
    }

    // printf("%d",x^y);}
