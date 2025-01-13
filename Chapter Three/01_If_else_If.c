#include <stdio.h>

int main(){
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if (age && age>=60){
        printf("You can drive and you are elder citizen with age %d", age);
    }
    else if(age>=18){
        printf("You can drive since you have age %d", age);
    }
    else{
        printf("You cannot drive since you have age %d and the minimun age requirement is 18", age);
    }
    return 0;
}