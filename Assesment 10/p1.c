#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    printf("ASCII value of %c = %d\n", ch, ch);
    return 0;
}