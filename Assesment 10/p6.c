#include <stdio.h>

int main()
{
    int num;
    char str[50];
    int i = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);   
    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);  
        i++;
    }

    return 0;
}