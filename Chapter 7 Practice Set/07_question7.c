// Repeat problem 6 for a custom input given by the user.
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
    int n[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Write %d value ", i);
        scanf("%d", &n[i]);
    }
    
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