#include <stdio.h>
// Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).

int main(){
    int n = 8, sum =0 , current_multiplication;
    for (int i = 1; i < 11; i++)
    {
        current_multiplication = n *i;
        sum += current_multiplication;
    }
    printf("sum is %d", sum);
    
    return 0;
}