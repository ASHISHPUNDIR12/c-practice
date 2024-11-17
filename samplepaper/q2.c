// Check if the array [3, 5, 7, 11, 13] is sorted in ascending order. Return true or false.
#include <stdio.h>
#include <stdbool.h>
bool check_sort(int arr[] , int n)
{
  
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {2, 5, 7, 14, 13};
      int n = sizeof(arr) / sizeof(arr[0]);
    if (check_sort(arr , n))
    {
        printf("array is sorted");
    }
    else
    {
        printf("array is not  sorted");
    }

    return 0;
}