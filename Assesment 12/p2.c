#include <stdio.h>

void getdata(char *str, char *ch);
void findpositions(char *str, char ch, int *pos, int *count);
void print(int *pos, int count);

int main()
{
    char string[100];
    char character;
    int positions[100];
    int count = 0;

    getdata(string, &character);
    findpositions(string, character, positions, &count);
    print(positions, count);

    return 0;
}

void getdata(char *str, char *ch)
{
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", ch);
}

void findpositions(char *str, char ch, int *pos, int *count)
{
    int index = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            *(pos + *count) = index;
            (*count)++;
        }

        str++;
        index++;
    }
}

void print(int *pos, int count)
{
    int i;

    if (count == 0)
    {
        printf("Character not found");
        return;
    }

    printf("Character found at positions: ");

    for (i = 0; i < count; i++)
    {
        printf("%d ", *(pos + i));
    }
}