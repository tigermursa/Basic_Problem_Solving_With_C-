/*
 Pattern 4
          * 
        * * 
      * * * 
    * * * * 
  * * * * * 
* * * * * * 


          * 
        * *  *
      * * *  * * 
    * * * *  * * *
  * * * * *  * * * *
* * * * * *  * * * * *

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
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}