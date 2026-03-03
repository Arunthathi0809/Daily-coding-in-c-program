#include<stdio.h>
void disp_assend(int, int, int);

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    disp_assend(x, y, z);
}

void disp_assend(int x, int y, int z)
{
    int a, b, temp, gcd, lcm12, final_lcm;

    // ---- Step 1: LCM of x and y ----
    a = x;
    b = y;

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm12 = (x * y) / gcd;

    // ---- Step 2: LCM of lcm12 and z ----
    a = lcm12;
    b = z;

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    final_lcm = (lcm12 * z) / gcd;

    printf("LCM = %d", final_lcm);
}