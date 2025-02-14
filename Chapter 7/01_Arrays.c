 #include <stdio.h>
 
 int main(){
    int array[1];
    array[0] = 56;
    printf("%d\n", &array[0]);
    printf("%d", &array[1]);
    return 0;
 }