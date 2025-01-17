#include <stdio.h>

int main(){
    // sum of n  natural using do while loop
    int i = 1, sum=0, n=10;
    do
    {
        sum += i;
        i++;
    } while (i<=n);
    printf("%d", sum);
    
    return 0;
}