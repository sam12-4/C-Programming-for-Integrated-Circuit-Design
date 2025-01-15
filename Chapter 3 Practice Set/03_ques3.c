// #include <stdio.h>

// int main()
// {
//     float incomeslab, tax= 0;
//     printf("Enter income slab : ");
//     scanf("%f", &incomeslab);
//     printf("%f\n", incomeslab);
//     if (incomeslab > 250000 && incomeslab <= 500000)
//         tax =(incomeslab - 250000) * 0.05;
//     else if (incomeslab > 500000 && incomeslab <= 1000000)
//         tax = (500000 - 250000) * 0.05 + (incomeslab - 500000) * 0.2;
//     else if (incomeslab > 1000000)
//         tax = ((500000 - 250000) * 0.05) + ((100000 - 500000) * 0.2)+(incomeslab-1000000)*0.3;
//     else
//         tax = 0;

//     printf("The tax to be paid by empoyee to the government is %.2f tax", tax);
//     return 0;
// }

#include <stdio.h>

int main()
{
    float incomeslab, tax = 0;
    printf("Enter income slab : ");
    scanf("%f", &incomeslab); // Use %f for float input
    printf("Income slab entered: %.2f\n", incomeslab);

    if (incomeslab > 250000 && incomeslab <= 500000)
        tax = (incomeslab - 250000) * 0.05;
    else if (incomeslab > 500000 && incomeslab <= 1000000)
        tax = (500000 - 250000) * 0.05 + (incomeslab - 500000) * 0.2;
    else if (incomeslab > 1000000)
        tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.2 + (incomeslab - 1000000) * 0.3;
    else
        tax = 0;

    printf("The tax to be paid by the employee to the government is %.2f\n", tax);
    return 0;
}
