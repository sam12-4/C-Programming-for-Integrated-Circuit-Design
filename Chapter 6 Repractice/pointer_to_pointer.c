#include <stdio.h>

int main(){
    int i = 9;
    int *j = &i;
    int **k = &j;
    printf("The value of k is %d", **k);
    printf("The address of i is %d", &i);
    printf("The address of j is %d", &j);
    printf("The address of k is %d", &k);

    return 0;
}