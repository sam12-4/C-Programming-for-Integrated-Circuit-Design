#include <stdio.h>

int main(){
    // precedence
    // top to bottom and left to right
    //  * / %
    // + -
    // =
    int x=3, y=2,z=4;
    float num1  = x/y * 9.0/z;
    float num2 = x*y + z/5.0;
    printf("num1 is %f and num2 is %f", num1, num2);
    return 0;
}