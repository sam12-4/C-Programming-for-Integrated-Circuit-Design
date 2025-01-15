#include <stdio.h>

int main(){
    char character ;
    printf("Enter a character : ");
    scanf("%c", &character);
    printf("The ASCII value of %c is %d\n", character, character);
    if (character>=97 && character<=122) printf("The character is lowercase");
    else if (character>=65 && character<=90) printf("The character is uppercase");
    else printf("The character is not an alphabet");
    return 0;
}