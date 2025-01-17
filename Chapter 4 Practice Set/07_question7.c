// Write a program to calculate the factorial of a given number using a while loop.
#include <stdio.h>

int main(){
    int fact =1, n= 9;
    while (n>=1)
    {
        fact *=n;
        n -= 1;
    }
    printf("The factorial of %d is %d", n ,fact);
    
    return 0;
}