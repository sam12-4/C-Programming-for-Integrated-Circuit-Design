#include <stdio.h>

int main(){
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    // printf("%d", year%4);
    if (year%4==0)printf("The year is not leap year");
    else printf("The year is leap year");
    return 0;
}