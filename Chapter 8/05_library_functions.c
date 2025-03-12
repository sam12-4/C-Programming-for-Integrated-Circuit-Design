#include <stdio.h>
#include <string.h>

int main(){
    char st[]= {'a','n','s','a','r'};
    int lenght= strlen(st);
    printf("length is %d\n", lenght);
    char source[] = {'r','r', '\0'};
    char target[6] ;
    printf("source is %s\n", source);
    strcpy(target, source);
    printf("target becomes %s\n", target);
    char s1[] = "Sameer";
    char s2[] = " Bhai";
    strcat(s1, s2);
    printf("%s", s1);
    int value = strcmp(s1, s2); // yaad karnay ka tariqa hai strcmp('d', 'j') is negative; 
    printf("The value is %d", value);
    return 0;
}