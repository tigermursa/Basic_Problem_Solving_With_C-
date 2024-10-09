#include <stdio.h>

int main() {
    int n = 5; // You can change this value for larger or smaller butterflies

    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("* "); // Change '*' to any character you want
        }
        // Spaces in between
        for (int j = 1; j <= (2 * (n - i)); j++) {
            printf("  "); // Two spaces for better spacing
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("* "); // Change '*' to any character you want
        }
        printf("\n");
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("* "); // Change '*' to any character you want
        }
        // Spaces in between
        for (int j = 1; j <= (2 * (n - i)); j++) {
            printf("  "); // Two spaces for better spacing
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("* "); // Change '*' to any character you want
        }
        printf("\n");
    }

    return 0;
}
