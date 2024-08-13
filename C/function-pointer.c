#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int (*func)(int,int);
    func = add;
    printf("%d\n",func(a,b));
    func = sub;
    printf("%d\n",func(a,b));
    func = mul;
    printf("%d\n",func(a,b));
    func = div;
    printf("%d\n",func(a,b));
}