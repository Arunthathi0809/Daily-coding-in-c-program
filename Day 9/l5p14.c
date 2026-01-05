#include<stdio.h>
int main()
{
   int x,temp,digits=0,n,power=1,middle,first,last,a;
   printf("enter a number:");
scanf("%d",&x);
  for(temp=x;temp!=0;temp=temp/10)
  {
   digits++;
  }
  for(n=1;n<=digits-1;n++)
  { 
   power=power*10;
  }
  middle=(x%power)/10;
  first=x/power;
  last=x%10;
  a=last*power+middle*10+first;
  printf("%d is the interchanged number of first and last digit", a);
  return 0;
}