The Basic Problems 
1) Sum of number from 1 to N .(solved with c)
2) Is The Number Prime ? .
3) Sum of number from 1 to N wich are divides by 3 .
4) Print factorial number of N .
5.
 a)Pyramid Pattern
 b)Number Pattern
 c)Diamond Pattern
 d) block with number  



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
