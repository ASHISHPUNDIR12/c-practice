// Find the Minimum Number in an Array
#include <stdio.h>

int main(){
    int n ; 
    printf("enter the length of array\n");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int i = 0 ; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("minimun element is %d", min);

    return 0;
}