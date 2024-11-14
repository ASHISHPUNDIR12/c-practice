// Count the Occurrences of a Value in an Array

#include <stdio.h>
    int count(int arr[], int n , int target ){
        int count = 0;
        for(int i = 0 ; i<n; i++){
            if(arr[i]==target){
                count++;
            }
        }
        return count;
    }

int main(){
    int arr[] = {1 ,2 , 3 , 3 , 29 , 35 };
    int target ;
    printf("enter the target you want to count\n");
    scanf("%d", &target);
   int countnum  =  count(arr, 6 , target);
   printf("%d", countnum);
    return 0;
}
