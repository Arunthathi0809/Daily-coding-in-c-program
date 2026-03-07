
#include <stdio.h>

int main()
{
    int num;
    char str[100];

    printf("Enter an integer: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);

    printf("String value = %s", str);

    return 0;
}