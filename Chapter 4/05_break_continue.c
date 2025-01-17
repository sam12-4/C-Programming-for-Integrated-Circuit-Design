#include <stdio.h>

int main(){
    for (int i = 1; i < 20; i++)
    {
        if (i==6){
            // break; //break keyword breaks the loop
            continue; // continue keyword skips the current iteration
        }
        printf("The value of i is %d\n", i );
    }
    
    return 0;
}