#include<stdio.h>
int main()
{
    int x,y,a;
    printf("Enter the number: ");
    scanf("%d", &x);
    if((x%100)>(x/100))
     printf("success");
    else
     printf("failure");
    return 0;
}

