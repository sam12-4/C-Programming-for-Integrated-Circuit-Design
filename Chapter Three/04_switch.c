#include <stdio.h>

int main(){
    // The main difference between if else if ladder and switch case statement is that in switch case statement if we don't use break statement then all the other cases including the matching case will execute
    int age ;
    printf("Enter age : ");
    scanf("%d", &age);
    switch (age){
    case 18:
        printf("You have age 18");
        break;
    default:
        printf("You have age greater than or less than 18");
        break;
    }
    return 0;
}
// switch case statement is used for options