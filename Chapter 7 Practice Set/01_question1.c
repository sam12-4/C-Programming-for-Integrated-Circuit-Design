#include <stdio.h>

int main(){
    int arr[] = {4, 6,7,8};
    int *ptr = arr; // can also be &arr[0]
    printf("The value of third element in array is %d\n", arr[2]);
    printf("The value of which pointer points to in array is %d\n", *(ptr +2));
    printf("\n");
    return 0;
}