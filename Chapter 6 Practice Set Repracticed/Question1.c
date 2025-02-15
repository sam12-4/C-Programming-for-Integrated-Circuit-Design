#include <stdio.h>

int main(){
    int i = 9;
    int * address = &i;
    printf("The address of i is %d\n", address);
    printf("The value of i is %d", *address);
    return 0;
}