// reverse the array using recursion
#include <stdio.h>
void reverse(int i, int arr[], int n)
{
    if (i > n / 2)
    {
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
    reverse(i + 1, arr, n);
}
int main()
{
    int n;
    printf("enter the length\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}