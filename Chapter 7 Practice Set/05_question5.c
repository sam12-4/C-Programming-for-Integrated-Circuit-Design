// Write a program containing functions which counts the number of positive integers in an array.
#include <stdio.h>

int countPositive(int arr[],int length){
    int count= 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > 0){ 
            count++;
        }
    }
    return count;
    
}

int main(){
    int a []= {1,2,-4,-4,56,-6,8,9};
    int len = 8;

    printf("%d", countPositive(a, len));

    return 0;
}