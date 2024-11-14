// find the maximum
#include <stdio.h>

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    printf("enter the length\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = i; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, n);
    printf("maximum : %d", max);
    return 0;
}