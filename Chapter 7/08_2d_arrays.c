#include <stdio.h>

int main(){
    int multi_array[4][3];
    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 3; j++)
       {
           printf("Please enter value of %d column of %d row ",j+1, i+1);
           scanf("%d", &multi_array[i][j]);
       }
       
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
       {
           printf("multi_array[%d][%d] %d , address is %d \n",i+1, j+1, multi_array[i][j], &multi_array[i][j]);
       }
    }

    return 0;
}