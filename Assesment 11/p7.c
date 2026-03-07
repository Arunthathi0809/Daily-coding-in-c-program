#include <stdio.h>
int compare(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[0])
        {
            return 0;  
        }
    }
    return 1; 
 }

int main()
{
    int arr[5];

    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(compare(arr, 5))
        printf("Success");
    else
        printf("Failure");

    return 0;
}