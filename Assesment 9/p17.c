#include <stdio.h>
int main()
{
    int a[50], n, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i] >= 10)   // if two digit number
        {
            int carry = a[i] / 10;
            a[i] = a[i] % 10;

            if(i+1 < n)
            {
                a[i+1] = a[i+1] + carry;
            }
        }
    }

    printf("Array after adjusting carry:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}