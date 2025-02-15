// Try problem 3 using call by value and verify that it does not change the value of
// the said variable.

#include <stdio.h>

void change_value(int value);

int main(){
    int i = 9;
    change_value( i);
    printf("The value of i becomes %d", i);
    return 0;
}

void change_value(int value){
    value *= 10;
    return;
}