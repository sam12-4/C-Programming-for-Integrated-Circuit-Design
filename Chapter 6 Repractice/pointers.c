#include <stdio.h>

int main(){
    int i = 6;
    int *j = &i;
    printf("The value of i is %d\n", i );
    printf("The value of j is %d\n", j );
    printf("The address of i is %d\n", &i);
    printf("The address of j is %d\n", &j);
    printf("The value which j is pointing to is %d", *j);

    return 0;
}