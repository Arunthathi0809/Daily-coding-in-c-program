#include <stdio.h>
int main()
{
    int x,a,b,c,d,e,y;
    printf("Enter a 3-digit number: ");
    scanf("%d", &x);
    a = x % 10;
    b = (x / 10) % 10;
    c = x / 100;
    d = a + b + c;          
    e = (d/10) + (d%10);  
    y= (e/10)+(e%10); 
    printf("result = %d",y);
    return 0;
}