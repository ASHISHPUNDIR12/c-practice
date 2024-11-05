// move all the non zero element at the end 
#include <stdio.h>

// optimal solution 
void remove_zero(int arr[], int n ){
    int j = -1 ; 
    for(int i = 0 ; i<n; i++){
        if(arr[i]==0){
            j = i ;
            break ; 

        }
    }
    for(int i = j+1 ; i<n ; i++){
        if(arr[i]!=0){
            int temp = arr[i]; 
            arr[i] = arr[j];
            arr[j] = temp ; 
            j++;
        }
    }
} ; 

int main(){
    int n = 6, k;
    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    remove_zero(arr , n );
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
