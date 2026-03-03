#include <stdio.h>
int main()
{
    int num1, num2, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    a = num1;
    b = num2;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF (GCD) of %d and %d is %d", num1, num2, a);
    return 0;
}