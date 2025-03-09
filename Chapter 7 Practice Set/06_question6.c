// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.
#include <stdio.h>

void printArray(int arr[3][10], int i, int j){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ",arr[i][j]);
        }
        
        printf("\n");
    }
}

int main(){
    int arr [3][10];
    int n []= {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = n[i] * (j+1);
        }
        
    }
    printArray(arr, 3, 10);
    

    
    return 0;
}