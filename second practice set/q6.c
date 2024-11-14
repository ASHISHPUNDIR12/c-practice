// sum of values in array
#include <stdio.h>
int sum(int arr[], int n){
    int count = 0;
    for(int i =0 ; i<n ; i++){
        count = count + arr[i];
    }
    return count ;
}
int main(){
    int arr[] = {1 ,2 , 3 ,5 , 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", sum(arr,n));
    

    return 0;
}