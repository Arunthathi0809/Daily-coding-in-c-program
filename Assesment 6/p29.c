#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int a, b, gcd, lcm12, final_lcm;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    a = num1;
    b = num2;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm12 = (num1 * num2) / gcd;
    a = lcm12;
    b = num3;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    final_lcm = (lcm12 * num3) / gcd;
    printf("LCM of %d, %d and %d is %d", num1, num2, num3, final_lcm);
    return 0;
}