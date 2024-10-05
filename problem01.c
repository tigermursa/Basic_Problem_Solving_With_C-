//  sum 1 to n

#include <stdio.h>

int main()
{

    int n;
    int sum = 0;
    printf("what is your number:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {

        sum += i;
    }

    printf("the sum is %d i like this %d number", sum, sum);
    return 0;
}