// Create a copy of an array
#include <stdio.h>

int main()
{
    int n;
    printf("enter the length of array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("real array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    printf("coppy array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}