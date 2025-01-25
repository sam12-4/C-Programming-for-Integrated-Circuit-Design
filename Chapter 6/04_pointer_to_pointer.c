#include <stdio.h>

int main(){
    int i = 0 ;
    int* j = &i;
    printf("The  value of i is %d\n", i);
    printf("The  address of i is %d\n", &i);
    printf("The  address of of i is %d\n", j);
    printf("The  value of of j is %d\n", *j);
    int **k ;
    k = &j;
    printf("The  address that k contains is of j which is %d\n",**k);

    return 0;
}