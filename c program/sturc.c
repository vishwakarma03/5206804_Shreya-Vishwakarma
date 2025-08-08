//largest of 3 numbers using structures

#include<stdio.h>
int main(){
    struct number
    {
        int a,b,c, large;
    }
    num;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &num.a, &num.b, &num.c);
    
    if (num.a>num.b && num.a >num.c)
        num.large = num.a;
    else if 
        (num.b>num.a && num.b >num.c)
        num.large = num.c;
    else
        num.large = num.c;

            printf("Largest number is: %d/n", num.large);
            return 0;
    
}