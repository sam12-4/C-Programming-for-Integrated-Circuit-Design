#include <stdio.h>

int sum (int, int);

int sum (int a , int b){
    a= 7;
    return a+b;
}

int main(){
    int c = 6;
    int d = 9;
    printf("The sum of %d and %d is %d\n", c, d, sum(c,d));
    printf("The value of c is %d", c);
    return 0;
}