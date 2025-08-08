
//to check the eligibily to drive
#include<stdio.h>
int main(){
    int age;
    int licence;
    printf("enter age: ");
    scanf("%d, &age");
    printf("does the user have a licenc? (y/n) ");
    scanf("%s, &licence")

    if (age>18 && licence=="y")
        printf("Eligible to drive!\n");
    else if(age>18 && licence=="n")
        printf("eligible but get the licence\n");
    else    
        printf("not eligible to drive\n");
        
    return 0;
}