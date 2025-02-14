#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter marks of 5 students\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Value of %d sutdent ",i+1);
        scanf("%d", &marks[i]);
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 5; i++)
    {
        printf("The marks of %d student is %d\n", i+1, marks[i]);
    }
    
     
    return 0;
}

// #include <stdio.h>

// int main(){
//     int marks[5];  

//     printf("Enter marks of 5 students\n");

//     // scanf("%d", &marks[0]);
//     // scanf("%d", &marks[1]);
//     // scanf("%d", &marks[2]);
//     // scanf("%d", &marks[3]);
//     // scanf("%d", &marks[4]);
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &marks[i]);
//     }

//       for (int i = 0; i < 5; i++)
//     {
//         printf("The value of marks at index %d is %d\n", i, marks[i]);
//     }
    
 
//     return 0;
// }