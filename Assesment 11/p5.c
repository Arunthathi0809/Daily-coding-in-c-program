#include <stdio.h>

void copyArray(int source[], int dest[], int n)
{
    for(int i = 0; i < n; i++)
    {
        dest[i] = source[i];
    }
}

int main()
{
    int source[5], dest[5];
    int n = 5;

    printf("Enter 5 integers:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &source[i]);
    }

    copyArray(source, dest, n);

    printf("Copied array elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", dest[i]);
    }

    return 0;
}