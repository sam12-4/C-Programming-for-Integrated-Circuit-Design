// Write a function and pass the value by reference
#include <stdio.h>


int sum (int *a, int *b){
    return *a+*b;
}

int main(){
    int a = 9;
    int b =10 ;
    printf("The Sum of %d and %d is %d", a, b, sum(&a, &b));
    return 0;
}