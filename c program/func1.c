#include<stdio.h>

//prototype

int sum(int, int);

//definition

int sum(int a, int b){
    int c=a+b;
    return c;
}

//driver code

int main(){
    int result = sum(2,3);
    printf("Sum =%d\n", result);
    return 0;
}