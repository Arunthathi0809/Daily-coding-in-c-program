#include<stdio.h>
int main()
{
    int x,y,a;
    printf("Enter the number: ");
    scanf("%d", &x);
    y=((x/1000)==(x%10));
    printf("Result = %d", y);
    return 0;
}
