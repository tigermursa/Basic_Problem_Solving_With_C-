#include <stdio.h>

int main()
{

    int n = 4;

    // shape 1:
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // shape 2:

    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // shape 3:
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            printf("*  ");
        }
        printf("\n");
    }

    // shape :4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = n; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
