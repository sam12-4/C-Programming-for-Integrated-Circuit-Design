#include <stdio.h>

int main(){
    int a = 68;
    int b =89;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("ptr1 is %d\n", ptr1);
    printf("ptr2 is %d\n", ptr2);
    if (ptr1 == ptr2){
        printf("Both are equal\n");
    }
    int num = ptr2 - 1;
    printf("num is %d\n", num);

    int num2 = ptr2 + 1;
    printf("num2 is %d\n", num2);

    int num3 = ptr2 - ptr1;
    printf("num3 is %d\n", num3);
    
    return 0;
}