// 6. Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.

#include <stdio.h>

int main(){
    int i =9;
    int* j = &i;
    int **k = &j;
    printf("The value of i is %d\n",i );
    printf("The value of i from j is %d\n",*j );
    printf("The value of i from k and then j is %d\n",**k );
    return 0;
}