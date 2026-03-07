#include <stdio.h>
int main()
{
    int num;
    int *ptr;
    printf("Enter a number: ");
    scanf("%d", &num);
    ptr = &num;   
    printf("The number is: %d", *ptr);
    return 0;
}