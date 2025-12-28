#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter the number: ");
    scanf("%d", &x);

    y = (x == 50);   
    printf("Result = %d", y);

    return 0;
}
