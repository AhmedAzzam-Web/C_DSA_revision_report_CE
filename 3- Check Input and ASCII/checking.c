#include <stdio.h>

void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("The character is an uppercase letter.\n");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("The character is a lowercase letter.\n");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("The character is a digit.\n");
    }
    else
    {
        printf("The character is a special character.\n");
    }
    printf("The ASCII value of the character is: %d\n", c);
}