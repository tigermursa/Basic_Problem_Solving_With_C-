#include <stdio.h>

int main()
{

    
     for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; j >= i; j--)
        {
            printf("@ ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(". ");
        }
        for (int j = i-1; j >= 1; j--) {
            printf(". ", j);
        }
        for (int j = 6; j >= i; j--)
        {
            printf("@ ");
        }
        
        printf("\n");
    }
}