// check if 2 array are disjoint
#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
bool check_disjoint(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    printf("Enter the length of first array: \n");
    int n;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the  second array: \n");
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    if (check_disjoint(arr1, arr2, n))
    {
        printf("array is disjoint");
    }
    else
    {
        printf("array is not disjoint");
    }

    return 0;
}