// Compute the Average of an Array
// instution - just divide the sum of elements of arr with length of arr
#include <stdio.h>
void average(int arr[], int n , int* avg ){
    int sum = 0 ;
    for(int i =0 ; i<n; i++){
        sum = sum + arr[i];

    }
    *avg = sum /n ;
}
int main(){
    int arr[] = {1 ,4, 5 ,6 ,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int avg ; 
    average(arr, n, &avg);
    printf("%d", avg);


    return 0;
}