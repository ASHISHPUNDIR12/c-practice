//  Write a program to find the maximum difference between any two elements in an array.
// approach if we subtract the maximum and minimum then we can find it maximum diffrence 
#include<stdio.h>
int diff(int arr[], int n ){
    // finding the maximum numj
    int maxi = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    // finding the minimum num
    int mini = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    // int result =  ;
    return maxi - mini ;
   
}


int main(){
    printf("enter the length of array:\n");
    int n ;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int diffrence = diff(arr, n);
    printf("%d",diffrence);
    // int max = maximum(arr , n );
    // int min = minimum(arr, n);
    return 0;
}