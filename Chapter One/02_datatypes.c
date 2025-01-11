#include <stdio.h>


int main(){
    int integer = 4; // 4bytes
    char ch; // 1 byte
    ch = 'm'; // char can only be written in single quotes and char has 1 byte
    float point = 3.4;

    printf("The integer is %d\n", integer);
    printf("The character is %c\n", ch);
    printf("The float is %f\n", point);


    return 0;
};