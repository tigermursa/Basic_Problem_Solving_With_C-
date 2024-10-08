/*
 Pattern 5
          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 6; i++) // loop for each row
    {
        // Print leading spaces
        for (int j = 6; j > i; j--) // this loop prints the spaces
        {
            printf("  "); // print two spaces for each iteration
        }

        // Print stars
        for (int j = 1; j <= i; j++) // this loop prints the stars
        {
            printf("* ");
        }
        printf("\n"); // move to the next line after printing stars
    }
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