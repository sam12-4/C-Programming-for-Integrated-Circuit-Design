#include <stdio.h>

int main(){
    int incomeslab;
    printf("Enter income slab : ");
    scanf("%d", &incomeslab);
    printf("%d\n", incomeslab);
    if (incomeslab>250000 && incomeslab<=500000) printf("The tax paid by employee to the government is %f", incomeslab*(5.0/100));
    else if (incomeslab>500000 && incomeslab<=1000000) printf("The tax paid by employee to the government is %f", incomeslab*(20.0/100));
    else if (incomeslab>=1000000) printf("The tax paid by employee to the government is %f", incomeslab*(30.0/100));
    else printf("The tax paid by employee to the government is zero tax");
    return 0;
}