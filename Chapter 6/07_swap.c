// we are gonna swap a with b using reference
#include <stdio.h>

void swap(int * , int *);

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;

}
int main(){
    int c = 6; 
    int d = 7;
    printf("The value of c and d before swap are %d and %d\n", c, d);
    swap(&c, &d);
    printf("The value of c and d after swap are %d and %d\n", c, d);

    
    return 0;
}