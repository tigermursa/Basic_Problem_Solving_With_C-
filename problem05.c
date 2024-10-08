//reverse the numbers like 123 will be 321

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        while (n > 0)
        {
            int digit = n % 10;
            printf("%d ", digit);

            // n =n/10;
            n /= 10;
        }
        printf("\n");
    }

    return 0;
}

//!