// Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float convert_to_faurenheight(float number);

int main(){
    float result  = convert_to_faurenheight(33);
    printf("The result is %f", result);
    return 0;
}

float convert_to_faurenheight(float number){
    return (number * 1.8)+32;
}