// The pointer of a value should be of same type as value
#include <stdio.h>

int main(){
    // pointer is just a variable which saves the address of other variable
    int i = 8;
    int *j = &i;
    char k = 'A';
    char *address_of_k = &k;
    printf("The Address of i is %p\n", &i); // address of operator
    printf("The pointer to i i.e j is %p\n", j);
    printf("The pointer to k i.e address_of_k is %p\n", address_of_k);
    // can also be
    printf("The pointer to k i.e address of k is %u\n", address_of_k);
    printf("The pointer to i i.e address of i is %u\n", &i);

    // value at address operator
    printf("The value at address of i is %d\n", *(&i));
    printf("The value at j i.e address of i is %d\n", *j);




    return 0;
}