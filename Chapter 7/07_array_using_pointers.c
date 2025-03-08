#include <stdio.h>

int main(){
    int arr[4];
    // int * ptr = &arr[0];
    int * ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter %d value", i);
        scanf("%d", ptr);
        ptr ++;
        // printf(&arr);
    }

    

    for (int i = 0; i < 4; i++)
    {
        printf("The %d value is %d\n",i, arr[i]);
    }
    
    return 0;
}