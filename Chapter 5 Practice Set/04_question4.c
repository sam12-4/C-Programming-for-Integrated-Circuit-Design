// Write a recursive function to calculate the sum of first ‘n’ natural numbers

#include <stdio.h>

int calculate_sum_of_natural_numbers(int number);
int sum=0;

int main(){
    int result = calculate_sum_of_natural_numbers (12);
    printf("The result is %d", result);
    return 0;
}


int calculate_sum_of_natural_numbers(int number){
    if (number==0) return 0;
    return number + calculate_sum_of_natural_numbers(number-1);

}