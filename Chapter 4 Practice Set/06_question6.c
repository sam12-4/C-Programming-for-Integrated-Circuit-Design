#include <stdio.h>
// Write a program to calculate the factorial of a given number using a for loop.
int main(){
    int n, factorial=1;
    int number = 9;
    for (n=number ; n; n--)
    {
        factorial*= n;
        // n -= 1;
    }
    
    printf("The factorial of %d is %d", number ,factorial);
    return 0;
}