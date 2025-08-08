//add 2 int

#include<stdio.h>

//func prototype

void sum(int, int);

//func definition

void sum(int a, int b){
    int c =a+b;
    printf("Sum= %d", c);
}

int main(){
    sum(2,3);//fun call
    return 0;
}