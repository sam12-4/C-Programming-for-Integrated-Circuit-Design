#include <stdio.h>

void swap (int *, int *);

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int i = 6;
    int j = 7;
    swap(&i, &j);
    printf("The value of i is %d and the value of j is %d", i , j);
    return 0;
}