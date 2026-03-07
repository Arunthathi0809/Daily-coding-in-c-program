#include <stdio.h>

void copyString(char source[], char dest[])
{
    int i = 0;

    while(source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }

    dest[i] = '\0';   // end the destination string
}

int main()
{
    char source[100], dest[100];

    printf("Enter a string: ");
    scanf("%s", source);

    copyString(source, dest);

    printf("Copied string: %s", dest);

    return 0;
}