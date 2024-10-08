// Number count of odd even positive or negative!

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);

    int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }

        if (num > 0)
        {
            positive_count++;
        }
        else if (num < 0)
        {
            negative_count++;
        }
    }

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    printf("Even: %d\n", positive_count);
    printf("Even: %d\n", negative_count);

    return 0;
}

//!