/*
 Pattern 8 The piramid

      1 
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
 1 2 3 4 5 6
1 2 3 4 5 6 7

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
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1



*/