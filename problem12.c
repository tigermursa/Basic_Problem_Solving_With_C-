/*
 Pattern 7 
 
          1 
        1 2
      1 2 3
    1 2 3 4
  1 2 3 4 5
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        // Print leading spaces
        for (int j = 6; j > i; j--)
        {
            printf("  "); //
        }

        // Print stars
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}