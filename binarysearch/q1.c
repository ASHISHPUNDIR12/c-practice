#include<stdio.h>
//   just concept of binary search 
    int search(int nums[], int target) {
        int n = sizeof(nums)/sizeof(nums[0]);
        int low = 0;
        int high = n-1;
        
        while(high>=low){
           int mid = (low + high)/2 ;
           if(nums[mid]==target) return mid;
           else if(nums[mid]<target){
            low = mid+1 ; 
           }
           else{
            high = mid-1 ;
           }
        }
        return -1 ;
    }
int main (){
    int nums[] = {1 , 2 , 4 ,55 ,10 }; 
    search(nums , 4 );
}