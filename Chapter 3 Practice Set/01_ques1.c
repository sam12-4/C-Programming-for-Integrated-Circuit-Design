#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11) // assignation at the start will make a value 11 and it will run the if statement
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}