#include <stdio.h>

int sum(int b , int c);

int main(){
    int answer = sum(4, 5);
    printf("The sum is %d", answer);
    return 0;
}

int sum(b, c){
        return b + c;
}