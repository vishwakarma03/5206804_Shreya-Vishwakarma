#include<stdio.h>
int main(){
    int a[5];
    int i;
    printf("Enter the values for the array: ");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }

    printf("\n The values entered by the user: ");
    for(i=0; i<5; i++){
        printf("%d\n", a[i]);
    }
    
    return 0;

}