// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main()

#include <stdio.h>


int sum (int *a, int *b){
    return *a+*b;
}

float average(int * num1, int * num2){
    printf("num1 is %d\n", *num1);
    printf("num2 is %d\n", *num2);
    printf("sum is %d\n", *num1+ *num2);
    return (float)(*num1 + *num2)/2.0;
}

int main(){
    int a = 9;
    int b =10 ;
    printf("The Sum of %d and %d is %d\n", a, b, sum(&a, &b));
    printf("The average of %d and %d is %0.2f\n", a, b, average(&a, &b));
    return 0;
}