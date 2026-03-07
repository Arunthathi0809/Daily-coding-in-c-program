#include <stdio.h>
void concatenate(int a[], int b[], int c[], int n1, int n2)
{
    int i;

    for(i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for(i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }
}

int main()
{
    int a[5], b[5], c[10];
    int n1 = 5, n2 = 5, i;
    printf("Enter 5 elements for first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter 5 elements for second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    concatenate(a, b, c, n1, n2);
    printf("Concatenated array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);
    return 0;
}