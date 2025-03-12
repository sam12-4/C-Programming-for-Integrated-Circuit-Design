#include <stdio.h>
#include <string.h>

int main(){
    // char s[] = {'s', 'a', 'm', 'e', 'e', 'r', '\0'};
    char s[] = "Sameer";
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c",s[i]);
        printf("\n");
    }   
    printf("\n");
    printf("%s",s);
    return 0;
}