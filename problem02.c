#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    bool isPrime = true;

    // Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Prime numbers are greater than 1
    if (n <= 1) {
        isPrime = false;
    } else {
        // Check from 2 to sqrt(n)
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
