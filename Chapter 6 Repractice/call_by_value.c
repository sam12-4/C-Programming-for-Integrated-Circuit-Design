#include <stdio.h>

int sum (int, int );


int sum (int a, int b){
    return a+b;
}

int main(){
    int i= 1;
    int j = 2;
    printf("The sum of %d and %d is %d",i , j , sum(i ,j));
    return 0;
}