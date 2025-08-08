
//nested if: find the grade of students based on score

#include<stdio.h>
int main(){
    int score = 75;
    if (score >= 90){
        printf("Grade : A\n");
    } else if (score >= 80){
        printf("Grade : B\n");
    } else if (score >= 70){
        printf("Grade : C\n");
    }

    return 0;
}
