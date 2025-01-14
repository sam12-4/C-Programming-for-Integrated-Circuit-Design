#include <stdio.h>

int main(){
    int firstnum, secondnum, thirdnum, fourthnum;
    printf("Enter first number : ");
    scanf("%d", &firstnum);
    printf("Enter second number : ");
    scanf("%d", &secondnum);
    printf("Enter third number : ");
    scanf("%d", &thirdnum);
    printf("Enter fourth number : ");
    scanf("%d", &fourthnum);
    if (firstnum>secondnum && firstnum>thirdnum && firstnum>fourthnum ) printf("First number is greater");
    else if (secondnum>firstnum && secondnum>thirdnum && secondnum>fourthnum ) printf("Second number is greater");
    else if (thirdnum>secondnum && thirdnum>firstnum && thirdnum>fourthnum )printf("Third number is greater");
    else if (fourthnum>secondnum && fourthnum>firstnum && fourthnum>thirdnum )printf("Fourth number is greater");
    else printf("all numbers are equal");

    return 0;
}