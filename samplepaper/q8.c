// Check if the array [9, 7, 5, 3, 1] is sorted in descending order. Return true or false
#include <stdio.h>
#include<stdbool.h>
    bool checksort(int arr[]){
        int n = 5 ;
        for(int i = 0 ; i<n-1; i++){
            if(arr[i]<arr[i+1]){
                return false ;
            }
        }
        return true  ; 
    }

int main(){
    int arr[] = {9, 7, 5, 3, 1};
    
    if(checksort(arr)){
        printf("yes its sorted in decending order");
    }
    else{
        printf("its not");
    }
    return 0;
}