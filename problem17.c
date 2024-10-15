/* MAKE LOWERCASE TO UPPERCASE AND UPPERCASE TO LOWERCASE*/



#include <stdio.h>



int main()
{
    char n;
    printf("Enter a letter: ");
    scanf("%c", &n); 

    // lowercase
    if (n >= 'a' && n <= 'z')
    {
        printf("Uppercase: %c\n", n - 32); // Convert 
    }
    // uppercase
    else if (n >= 'A' && n <= 'Z')
    {
        printf("Lowercase: %c\n", n + 32); // Convert 
    }
    else
    {
        printf("Invalid input. Please enter a letter.\n");
    }

    return 0;
}
