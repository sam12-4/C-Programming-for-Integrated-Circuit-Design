#include <stdio.h>

int main(){
    int a = 9;
    int * ptr = &a;
    printf("The address of a is %d", &a);
    printf("The address of a is %d", ptr);
    ptr++;
    printf("The address of a is %d", ptr);
    return 0;
}