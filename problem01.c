#include <stdio.h>

int main()
{
    int n = 4;
    int sum = 0;

    for (int i = 0; i <= n; i++)
    {

        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}