#include<stdio.h>
int main()
{
    int x,y,a;
    printf("Enter the number: ");
    scanf("%d", &x);
    if((x%10)!=(x/10))
     printf("success");
    else
     printf("failure");
    return 0;
}

