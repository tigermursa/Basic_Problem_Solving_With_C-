/*
 Pattern 8 The piramid

      * 
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *

*/
#include <stdio.h>

int main()

{
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" "); // one space
        }

        // Print stars
        for (int j = 1; j <= i; j++)
        {
            printf("* ", j);
        }
        printf("\n");
    }

    return 0;
}