#include <stdio.h>

int main(){
    float cgpa [] = {3.9, 3.7, 2.6};
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %.2f\n",i , cgpa[i]);
    }
    
    return 0;
}