// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?

#include <stdio.h>

void print_address(int *);



int main(){
    int i = 67; 
    printf("The adress of i is %d\n", &i);
    print_address(&i);
    return 0;
}


void print_address(int* a){
    printf("The address of i in function is %d", a);
    return;
}