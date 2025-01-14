#include <stdio.h>

int main(){
    int a =0 ;
    int b =1 ;
    printf("a and b is %d\n", a&&b);
    printf("a or b is %d\n", a||b);

    if (a){
        printf("It will run if a value is non zero");
    }

    return 0;
}