#include <stdio.h>

void getdata(char *mainstr, char *substr);
void checksubstring(char *mainstr, char *substr, int *pos);
void print(int pos);

int main()
{
    char mainstring[100];
    char substring[100];
    int position = -1;

    getdata(mainstring, substring);
    checksubstring(mainstring, substring, &position);
    print(position);

    return 0;
}

void getdata(char *mainstr, char *substr)
{
    printf("Enter main string: ");
    scanf("%s", mainstr);

    printf("Enter substring: ");
    scanf("%s", substr);
}

void checksubstring(char *mainstr, char *substr, int *pos)
{
    int i = 0;

    while (*(mainstr + i) != '\0')
    {
        char *m = mainstr + i;
        char *s = substr;

        while (*s != '\0' && *m == *s)
        {
            m++;
            s++;
        }

        if (*s == '\0')
        {
            *pos = i;
            return;
        }

        i++;
    }
}

void print(int pos)
{
    if (pos == -1)
        printf("Substring not found");
    else
        printf("Substring found at position %d", pos);
}