#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 60

void add(char a[], char b[]);
void subtract(char a[], char b[]);
void multiply(char a[], char b[]);
void divide(char a[], char b[]);

int main()
{
    char a[MAX], b[MAX];
    char op[10];

    while(1)
    {
        printf("\nCalc> ");
        scanf("%s", op);

        if(strcmp(op,"Exit")==0)
        {
            printf("Calculator closed.\n");
            break;
        }

        scanf("%s %s", a, b);

        if(strcmp(op,"+")==0)
            add(a,b);

        else if(strcmp(op,"-")==0)
            subtract(a,b);

        else if(strcmp(op,"*")==0)
            multiply(a,b);

        else if(strcmp(op,"/")==0)
            divide(a,b);

        else
            printf("Invalid operation\n");
    }

    return 0;
}

void add(char a[], char b[])
{
    int i=strlen(a)-1, j=strlen(b)-1, k=0, carry=0;
    char res[MAX];

    while(i>=0 || j>=0 || carry)
    {
        int sum=carry;

        if(i>=0) sum+=a[i--]-'0';
        if(j>=0) sum+=b[j--]-'0';

        res[k++]=(sum%10)+'0';
        carry=sum/10;
    }

    printf("Result: ");
    for(int x=k-1;x>=0;x--)
        printf("%c",res[x]);
    printf("\n");
}

void subtract(char a[], char b[])
{
    int i=strlen(a)-1, j=strlen(b)-1, borrow=0;
    char res[MAX];
    int k=0;

    while(i>=0)
    {
        int diff=(a[i]-'0')-borrow;

        if(j>=0) diff-=b[j]-'0';

        if(diff<0)
        {
            diff+=10;
            borrow=1;
        }
        else
            borrow=0;

        res[k++]=diff+'0';

        i--; j--;
    }

    printf("Result: ");
    for(int x=k-1;x>=0;x--)
        printf("%c",res[x]);
    printf("\n");
}

void multiply(char a[], char b[])
{
    int len1=strlen(a);
    int len2=strlen(b);
    int res[MAX]={0};

    for(int i=len1-1;i>=0;i--)
    {
        for(int j=len2-1;j>=0;j--)
        {
            int mul=(a[i]-'0')*(b[j]-'0');
            int sum=mul+res[i+j+1];

            res[i+j+1]=sum%10;
            res[i+j]+=sum/10;
        }
    }

    printf("Result: ");
    for(int i=0;i<len1+len2;i++)
        if(!(i==0 && res[i]==0))
            printf("%d",res[i]);
    printf("\n");
}

void divide(char a[], char b[])
{
    long long num=atoll(a);
    long long den=atoll(b);

    if(den==0)
    {
        printf("Division by zero error\n");
        return;
    }

    printf("Quotient: %lld\n", num/den);
    printf("Remainder: %lld\n", num%den);
}