#include <stdio.h>

int main()
{
    char num[51];
    int i = 0, length = 0;

    printf("Enter a number (up to 50 digits): ");
    scanf("%s", num);

    while(num[length] != '\0')
    {
        length++;
    }

    printf("Reversed number: ");

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }

    return 0;
}