// find the lowest or equal to element related to k 
// using binary search 
#include <stdio.h>
int findFloor( int arr[], int k , int n ) {
    int low = 0 ;
    int high = n-1;
    int ans = -1 ;
    while(high>=low){
       int  mid = (low + high )/2;
        if (arr[mid] <= k) { // Check if arr[mid] is a potential floor
            ans = mid;       // Update ans with the current index
            low = mid + 1;   // Move right to find a closer floor if possible
        } else {
            high = mid - 1;  // Move left if arr[mid] is greater than k
        }

    }
    return ans;
}
int main (){
    int arr[] =  {1 , 2 ,3 ,5 ,8 ,19};
    findFloor(arr, 5 , 6);
}