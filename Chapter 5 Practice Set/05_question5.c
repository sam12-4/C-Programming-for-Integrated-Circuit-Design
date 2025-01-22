// // Write a program using function to print the following pattern (first n lines)
// // *
// // ***
// // *****

#include <stdio.h>

int print_pattern(int number);

int main(){
    printf("The result for 3 pattern is \n", print_pattern(3));
    return 0;
}

int print_pattern(int number){
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < (2*i)+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
