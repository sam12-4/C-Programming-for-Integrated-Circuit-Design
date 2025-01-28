#include <stdio.h>


void find_address();

void find_address(int i ){
    printf("The address of the variable from the function is %d", &i );
    return;
};


int main(){
    int i = 9;
    printf("The address of the variable is %d\n", &i);
    find_address(i);
    // printf("The address of the variable from function is %d", find_address(i));

    return 0;
}