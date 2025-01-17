#include <stdio.h>

int main()
{
    int counter = 0;
    while (counter <= 20 )
    {
        if (counter >= 10)
        {
            printf("The value of counter is %d\n", counter);
        }
        counter++;
    }
    return 0;
}