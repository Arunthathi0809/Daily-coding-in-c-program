#include <stdio.h>
#include <string.h>

void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2, char *result);
void print(char *result);

int main()
{
    char number1[51], number2[51];
    char result[52];

    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);

    return 0;
}

void getnumbers(char *n1, char *n2)
{
    printf("Enter first number (max 50 digits): ");
    scanf("%s", n1);

    printf("Enter second number (max 50 digits): ");
    scanf("%s", n2);
}

void addnumbers(char *n1, char *n2, char *result)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    char *p1 = n1 + len1 - 1;
    char *p2 = n2 + len2 - 1;
    char *r  = result;

    int carry = 0;

    while (len1 > 0 || len2 > 0 || carry)
    {
        int sum = carry;

        if (len1 > 0)
        {
            sum += *p1 - '0';
            p1--;
            len1--;
        }

        if (len2 > 0)
        {
            sum += *p2 - '0';
            p2--;
            len2--;
        }

        *r = (sum % 10) + '0';
        r++;
        carry = sum / 10;
    }

    *r = '\0';

    /* Reverse the result */
    int i = 0;
    int j = strlen(result) - 1;
    while (i < j)
    {
        char temp = *(result + i);
        *(result + i) = *(result + j);
        *(result + j) = temp;
        i++;
        j--;
    }
}

void print(char *result)
{
    printf("Sum = %s\n", result);
}