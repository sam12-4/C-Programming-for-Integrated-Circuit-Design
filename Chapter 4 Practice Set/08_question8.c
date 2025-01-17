#include <stdio.h>
#include <stdbool.h>
// Write a program to check whether a given number is prime or not using loops.
int main(){
    int number = 12 ;
    bool isPrime =true;
    for (int i = 2; i <= number-1; i++)
    {
        if (number%i == 0){ 
        printf("the number is not prime since its divisible by %d\n", i );
        isPrime = false;
        break;
        }
    }
    
    if (isPrime)printf("The number is prime");
        // }
    return 0;
}