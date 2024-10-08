/*
    Pattern 3 start

    * * * * *
    * * * *
    * * * 
    * * 
    * 

*/

#include <stdio.h>

int main()
{
    for (int i = 6; i >= 1; i--)
    {
        // printf("%d \n", i);

        for (int j = 1; j < i; j++)
        {
            printf("* ", i);
        }
        printf("\n");
    }


    return 0;
}
