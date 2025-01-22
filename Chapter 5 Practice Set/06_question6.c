#include <stdio.h>
// Write a program using recursion to calculate nth element of Fibonacci series

// 0 , 1 , 1, 2, 3 ,5 ,8 ,13
// fibonnaci(1) =0 
// fibonnaci(2) = 1  
// fibonnaci(3) = fibonnaci(2) + fibonnaci(1)
int fibonnaci (int);

int fibonnaci (int n){
    if (n==2 || n==1)  return n-1;
    return fibonnaci(n-1) + fibonnaci(n-2);

}
int main(){
    printf("The result of fibonacci series is %d", fibonnaci(7) );
    return 0;
}