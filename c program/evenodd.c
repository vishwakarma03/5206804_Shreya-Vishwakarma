#include<stdio.h>
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    if (num%2 == 0)
        printf ("\n  even");
    else
        printf("\n  odd");

        return 0;
}