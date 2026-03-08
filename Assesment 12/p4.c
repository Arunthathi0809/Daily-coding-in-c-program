#include <stdio.h>

void getdata(char *str);
void countwords(char *str, int *count);
void print(int count);

int main()
{
    char string[200];
    int words = 0;

    getdata(string);
    countwords(string, &words);
    print(words);

    return 0;
}

void getdata(char *str)
{
    printf("Enter a string: ");
    fgets(str, 200, stdin);
}

void countwords(char *str, int *count)
{
    int inword = 0;

    while (*str != '\0')
    {
        if (*str != ' ' && *str != '\n' && inword == 0)
        {
            (*count)++;
            inword = 1;
        }
        else if (*str == ' ' || *str == '\n')
        {
            inword = 0;
        }

        str++;
    }
}

void print(int count)
{
    printf("Number of words = %d\n", count);
}