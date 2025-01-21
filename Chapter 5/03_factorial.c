#include <stdio.h>


int factorial(int number);

int main(){
    int result = factorial(5);
    printf("The Factorial is equal to %d", result);
    return 0;
}

int factorial(int number){
    if (number==0){
        return 1;
    }
    return number * factorial(number-1);
}