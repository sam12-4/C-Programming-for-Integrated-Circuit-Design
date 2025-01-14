// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.
#include <stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("Enter marks 1 : ");
    scanf("%d", &marks1);
    printf("Enter marks 2 : ");
    scanf("%d", &marks2);
    printf("Enter marks 3 : ");
    scanf("%d", &marks3);
    if ((marks1+marks2+marks3)/3<40) printf("You are not passed since the overall subject marks criteria of 40% is not met");
    else if (marks1<33||marks2<33||marks3<33)printf("You are not passed since the individual subject marks criteria of 40% is not met");
    else printf("You are passed");
    return 0;
}