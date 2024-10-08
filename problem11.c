/*
    Pattern 6 start
1 
2 1 
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        // printf("%d \n", i);

        for (int j = i; j >=1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}