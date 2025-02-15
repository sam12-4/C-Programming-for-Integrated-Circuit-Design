// Write a program to change the value of a variable to ten times of its current
// value.
#include <stdio.h>

void change_value(int* value);

int main(){
    int i = 9;
    change_value(& i);
    printf("The value of i becomes %d", i);
    return 0;
}

void change_value(int* value){
    * value *= 10;
    return;
}