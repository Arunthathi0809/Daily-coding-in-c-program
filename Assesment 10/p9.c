#include <stdio.h>

int main()
{
    char num[51];
    int i = 0;

    printf("Enter a number (up to 50 digits): ");
    scanf("%s", num);

    while(num[i] == '0')
    {
        i++;
    }

    if(num[i] == '\0')
        printf("0");
    else
        printf("Number after removing leading zeros: %s", &num[i]);

    return 0;
} 