// Write a program to change the value of a variable to ten times of its current value.
#include <stdio.h>

int change_ten(int *i){
    int number = *i * 10;
    return number; 
}

int main(){
    int i =90; 
    printf("The number after 10 times is %d",change_ten( &i));
    return 0;
}