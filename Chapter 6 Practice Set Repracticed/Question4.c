// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main()

#include <stdio.h>

void calculate_Sum_and_Average(int number1, int number2, int *sum, int *average);

int main(){
    int num1= 9;
    int num2 = 7;
    int sum, average;
    calculate_Sum_and_Average(num1, num2, &sum , &average);
    printf("The sum of numner %d and %d is %d\n",num1, num2, sum);
    printf("The average of numner %d and %d is %d",num1, num2, average);
    return 0;
}

void calculate_Sum_and_Average(int number1, int number2, int *sum, int *average){
    *sum = number1 + number2;
    *average = (number1+ number2)/2;
    return;

}