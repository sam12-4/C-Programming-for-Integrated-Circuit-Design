#include <stdio.h>


void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int n){
    for (int i = 0; i < n/2 ; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
}


int main(){
    int length = 6;
    int arr [] = {1, 2, 3,4 ,5, 6};
    printarray(arr, length);
    reverseArray(arr, length);
    printarray(arr, length);

    return 0;
}