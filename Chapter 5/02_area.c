#include <stdio.h>

int area(int number);


int main(){
    int result = area(5);
    printf("The area is %d", result);
    return 0;
}

int area (int number ){
    return number*number;
}