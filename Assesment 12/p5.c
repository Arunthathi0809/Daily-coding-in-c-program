#include <stdio.h>
#include <string.h>

void getnumbers(char *n1, char *n2);
void multiplynumbers(char *n1, char *n2, int *result);
void print(int *result, int size);

int main()
{
    char number1[51], number2[51];
    int result[100] = {0};
    int size;

    getnumbers(number1, number2);

    size = strlen(number1) + strlen(number2);

    multiplynumbers(number1, number2, result);

    print(result, size);

    return 0;
}

void getnumbers(char *n1, char *n2)
{
    printf("Enter first number (max 50 digits): ");
    scanf("%s", n1);

    printf("Enter second number (max 50 digits): ");
    scanf("%s", n2);
}

void multiplynumbers(char *n1, char *n2, int *result)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    int i, j;

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (*(n1 + i) - '0') * (*(n2 + j) - '0');

            int sum = *(result + i + j + 1) + mul;

            *(result + i + j + 1) = sum % 10;
            *(result + i + j) += sum / 10;
        }
    }
}

void print(int *result, int size)
{
    int i;
    int start = 0;

    while (start < size && *(result + start) == 0)
        start++;

    if (start == size)
    {
        printf("Result = 0");
        return;
    }

    printf("Result = ");

    for (i = start; i < size; i++)
        printf("%d", *(result + i));

    printf("\n");
}