#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%2==0)
        printf("%d",x);
    
    if(x%2!=0)
    
        printf("%d",x-1);
    return 0;
    
}