#include <stdio.h>

int main(){
    // using hard coded inputs
    // int lenght = 7, breadth = 4;
    // printf("The area of triangle is %d", lenght*breadth);

    // using inputs supplied by user
    int length, breadth;
    printf("Enter value of length\n");
    scanf("%d", &length);
    printf("Enter value of breadth\n");
    scanf("%d", &breadth);
    printf("The area of rectangle is %d",length*breadth);

    return 0;
}