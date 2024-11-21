// Find the Largest and Smallest Elements in an Array
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {1 ,3 ,4 , 65, 10};
    int n = 5;
    int max = arr[0];
    int min = INT_MAX;
    // for max 
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i = 0 ; i<n ; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("maximum element is : %d \n", max);
    printf("minimum element is : %d ", min);
}