#include <stdio.h>

int main(){
    int arr[10];
    int num=5;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}