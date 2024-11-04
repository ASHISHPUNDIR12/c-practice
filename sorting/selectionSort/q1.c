// sorting array using selection sort

#include <stdio.h>

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
void bubble_sort(int arr[], int n)
{
    int didswap = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
    }
}
void insertion_sort(int arr[] , int n ){
    for(int i = 0 ; i<n ; i++){

        int j = i  ; 
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j] ; 
            arr[j] = temp ; 
            j-- ;
        }
        
    }
}

int main()
{
    int n;
    printf("enter the length\n ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // selection_sort(arr  , n );
    // bubble_sort(arr, n);
    insertion_sort(arr , n );

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}