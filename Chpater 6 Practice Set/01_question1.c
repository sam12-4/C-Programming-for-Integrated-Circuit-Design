// Write a program to print the address of a variable. Use this address to get the
// value of the variable.

 #include <stdio.h>
 
 int main(){
    int a= 9;
    int* address = &a;
    printf("The value of the variable is %d", address);
    printf("The value of the variable is %u", *address);
    return 0;
 }