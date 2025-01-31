// Try problem 3 using call by reference and verify that it does not change the value of
// the said variable.
#include <stdio.h>


int change_ten_times(int * i){
    return *i *= 20;

}

int main(){
    int i = 90;
    change_ten_times(&i);
    printf("The value of i after change is %d",i);


    return 0;
}