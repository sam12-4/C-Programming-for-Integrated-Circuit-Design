// Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.

#include <stdio.h>

int main(){
    int i = 10;
    int *j, **k;
    j = &i;
    k = &j;
    printf("The value of i from j is %d\n", *j);
    printf("The value of i from k is %d\n", **k);
    return 0;
}