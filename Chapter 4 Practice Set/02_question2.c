#include <stdio.h>

int main(){
    int number = 10;
    //  mutiplication table of 10 in decrementation
    for (int i = 10; i; i--)
    {
        printf("The multiplication of %d with %d is %d\n", number ,i, number*i );
    }
    
    return 0;
}