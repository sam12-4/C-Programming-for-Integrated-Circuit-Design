#include <stdio.h>
#include <stdbool.h>
// Write a program to check whether a given number is prime or not using loops.
int main(){
    int number = 1 ;
    bool isPrime =true;
    if (number==1 || number==0)
    {
        isPrime = false;
    }
    else{
        for (int i = 2; i <= number-1; i++)
    {
        if (number%i == 0 && number!=2){ 
        printf("the number is not prime since its divisible by %d\n", i );
        isPrime = false;
        break;
        }
    }}
    
    if (isPrime)printf("The number is prime");
    else if (number==0 || number==1) printf("The number is not prime");
        // }
    return 0;
}