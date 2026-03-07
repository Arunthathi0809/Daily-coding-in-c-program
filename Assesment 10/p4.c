#include<stdio.h>
int main()
{
    char str[100];
    int i =0;
    printf("enter the word:");
    scanf("%s",str);
    printf("ASCII value of the character %s\n",str);
    while(str[i]!=0)
    {
            printf("you entered %c = %d\n",str[i],str[i]);
            i++;
    }

    return 0;
}