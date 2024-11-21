// . Find the maximum product of two integers in an array
// approach - 2 maximum number or 2 mini element

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("enter the length:\n");
    scanf("%d", &n);
    int arr[n];
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }
    int product1 = max1 * max2;
    int product2 = min1 * min2;

    if (product1 > product2)
    {
        printf("Maximum product is %d from %d and %d\n", product1, max1, max2);
    }
    else
    {
        printf("Maximum product is %d from %d and %d\n", product2, min1, min2);
    }
    
}