#include <stdio.h>

int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
       printf("Please enter value of %d number ", i+1);
       scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
       printf("The value of %d number is %d\n", i,  marks[i]);
    }

    
     
    return 0;
}
