// Write a program to reverse the elements of an array without using an additional array.
#include<stdio.h>
void reverse(int arr[], int n ){
   for(int i=n; i;i--){
    
   }
    }


int main(){
    int arr[]= {1 ,2 , 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, n);
    for(int i = 0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}