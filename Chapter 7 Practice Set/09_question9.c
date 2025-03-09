// Create a three–dimensional array and print the address of its elements in increasing order.

#include <stdio.h>

int main(){
    int arr [3][4][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                printf("%d ", &arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    
    return 0;
}