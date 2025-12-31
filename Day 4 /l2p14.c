#include<stdio.h>
int main()
{
    int x,y,a;
    printf("Enter the number: ");
    scanf("%d", &x);
    y=((x%100)==(x/100));
    printf("Result = %d", y);
    return 0;
}
