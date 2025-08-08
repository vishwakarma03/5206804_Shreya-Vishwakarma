#include<stdio.h>
int main(){
    int a[2][2];
    int i,j;
    printf("Enter the values of 2d array: ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The values entered by the user: ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%p\t", &a[i][j]);
        }
        printf("\n");
    }
    return 0;
}