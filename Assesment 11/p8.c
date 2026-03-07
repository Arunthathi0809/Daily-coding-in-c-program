#include <stdio.h>

int compareString(char s1[], char s2[])
{
    int i = 0;

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
            return 0;
        i++;
    }

    if(s1[i] == '\0' && s2[i] == '\0')
        return 1;
    else
        return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(compareString(str1, str2))
        printf("Success");
    else
        printf("Failure");

    return 0;
}