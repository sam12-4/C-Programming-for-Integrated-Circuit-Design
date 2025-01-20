#include <stdio.h>
#include <stdbool.h>
// Write a program to check whether a given number is prime or not using do while loops.

int main(){
    int number = 0;
    int i = 2;
    bool isPrime = true;
    if (number==0 || number==1)
    {
        isPrime = false;
    }
    
    else{
        do
    {
        if (number%i ==0 ){
            printf("the number is not prime since its divisible by %d\n", i);
            isPrime = false;
            break;
        }
        i++;
    } while (i<number);
    }
    if (isPrime)printf("The number is prime");
    else if (number==0 || number==1) printf("The number is not prime");
    // printf("%d", 3%100);

    return 0;
}