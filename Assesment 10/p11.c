#include <stdio.h>
int main()
{
    char num[51];
    int arr[50];
    int i = 0;
    printf("Enter a number (up to 50 digits): ");
    scanf("%s", num);
    while(num[i] != '\0')
    {
        arr[i] = num[i] - '0';  
        i++;
    }
    printf("Integer array elements:\n");
    for(int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}