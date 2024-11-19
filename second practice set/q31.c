#include <stdio.h>

    void rotate(int arr[], int n, int  k){
    // store element till k in temp 
    int temp[k];
    for(int i = 0 ; i<k; i++){
        temp[i] = arr[i];
    }
    // store end elements to the left 
    for(int i = k ; i<n ; i++){
        arr[i-k] = arr[i];
    }
    // append temp element in array 
    for(int i = 0 ; i<k ; i++){
        arr[n-k+i] = temp[i];
    }
    
}

int main()
{
    // rotate an array by k position
    int n = 5;

    printf("enter the %d elements\n", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k ;
    printf("k value\n");
    scanf("%d",&k);
    rotate(arr, n, k);
    printf("Array after rotating\n");

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }


    return 0;
}
