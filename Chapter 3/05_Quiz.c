#include <stdio.h>

int main(){
    // Marks Grade for Students
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);
    // printf("%d", marks);
    if (marks<=100)
    {if (marks>90){
        printf("Congrats! You have grade A");
    }
    else if (marks>80){
        printf("You have grade B");
    }
    else if (marks>70){
        printf("You have grade C");
    }
    else if (marks>60){
        printf("You have grade D");
    }
    else if (marks>50){
        printf("You have grade E");
    }
    else{
         printf("OOPS! You have grade F");
    }
    return 0;}
    else{
        printf("Please enter valid marks");
    }
}   