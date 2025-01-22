#include <stdio.h>
// 1. Write a program using function to find average of three numbers.

float average (float a , float b, float c);

int main(){
    float result = average(9, 8, 7);
    printf("The Factorial is equal to %f", result);
    return 0;
}

float average (float a , float b,  float c){
    return (a+b+c)/3;
}