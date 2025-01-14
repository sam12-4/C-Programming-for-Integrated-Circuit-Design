#include <stdio.h>

int main(){
    float number = 3.3;
    int integer = 45;
    // type conversion or type casting
    integer = (int) number; //convert the data type into integer
    printf("The number is %f and the converted number is %d ", number, integer);
    int num = 3.6;
    printf("%d",num); // demotion will return 3
    return 0;
}