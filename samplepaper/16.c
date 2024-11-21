
// Check if an Array is Sorted

#include<stdio.h>
#include <stdbool.h>
 
 bool checksorted(int arr[], int n){
  
    for(int i = 0 ; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return false ;
        }
    }
    return true ;
 }
int main(){
    int arr[] = {1, 2 ,9 , 5,  7};
    int n = 5 ;
    
    if(checksorted(arr, n)){
        printf("sorted");
    }
    else{
        printf("not sorted");
    }


}