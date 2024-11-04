// find the second largest elem ;
#include <stdio.h>

int secondLargest(int arr[], int n)
{
    // common approach not brute but bit better approach
    //  int maxelem = arr[0];
    //     for(int i = 0  ; i<n ; i++){
    //         if (arr[i]> maxelem)
    //         {
    //             maxelem = arr[i];
    //         }

    //     }
    //      int secondlarge = arr[0];
    //     for(int i = 0 ; i<n; i++){

    //         if(arr[i]>secondlarge && arr[i]!= maxelem){
    //             secondlarge = arr[i];

    //         }
    //     }
    //     return secondlarge ;
    // optimal approach to find second largest elem
    int largestelem = arr[0];
    int smallestelem = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largestelem)
        {
            smallestelem = largestelem;
            largestelem = arr[i];
        }
        else if(arr[i]<largestelem && arr[i]>smallestelem){
            smallestelem = arr[i] ;
        }
    }
    return smallestelem ; 
}

int main()
{
    int n;
    printf("Enter the length of arr\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int secondlarge = secondLargest(arr, n);
    printf("second large elem %d", secondlarge);
    return 0;
}