/*
    Pattern 2 start

    *
    * *
    * * *
    * * * *
    * * * * *

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        // printf("%d \n", i);

        for (int j = 1; j < i; j--)
        {
            printf("* ", i);
        }
        printf("\n");
    }
}
