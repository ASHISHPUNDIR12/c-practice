//  Write a program to find the second largest element in an array.

#include <stdio.h>
    int  secondmini(int arr[], int n){
        int max = arr[0];
        int smax = -1 ; // assuming non negative arry 
        for(int i = 0 ; i<n ; i++){
            if(arr[i]>max){
                smax = max ;
                max = arr[i];
            }
            else if(arr[i]>smax && arr[i]!=max){
                smax = arr[i];
            }
        }
    return smax ;
    }
int main(){
    int arr[] = {1 , 2, 3, 6,  6, 7 , 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("%d",secondmini(arr, n));
    return 0;
}