#include <stdio.h>
void incrementArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + 1;
    }
}
int main()
{
    int arr[5];
    int n = 5;
    printf("Enter 5 elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    incrementArray(arr, n);
    printf("Array after increment:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}