#include <stdio.h>

void rotate(int arr[], int n, int k)
{
    k = k % n; // Correct the rotation count if k is greater than n
    int temp[k];

    // Store the first k elements in temp array
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    // Shift the remaining elements of arr to the left by k positions
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    // Move the elements from temp back to the end of arr
    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
}

int main()
{
    int n = 5, k;
    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before rotating:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Rotate by how many places?\n");
    scanf("%d", &k);

    rotate(arr, n, k);

    printf("Array after rotating:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
