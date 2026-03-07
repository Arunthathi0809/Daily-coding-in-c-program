#include <stdio.h>

void concatenate(char s1[], char s2[], char result[])
{
    int i = 0, j = 0;

    while(s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }

    while(s2[j] != '\0')
    {
        result[i] = s2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}

int main()
{
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    concatenate(str1, str2, result);

    printf("Concatenated string: %s", result);

    return 0;
}