#include <stdio.h>

int main(){
    // sum of n natural numbers
    int n =10, sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of %d natural number is %d", n , sum);
    return 0;
}