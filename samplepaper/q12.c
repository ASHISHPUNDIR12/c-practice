// input 2d array 
#include <stdio.h>

int main(){
    int m , n  ; 
    scanf("%d %d" , &m , &n);
    int arr[m][n];
    printf("enter the elements\n");
    for(int i = 0 ; i<m ; i++){
        for(int j = 0;  j<n ; j++ ){
            scanf("%d" , &arr[i][j]);
        }
    }
    int count  = 0 ; 
     for(int i = 0 ; i<m ; i++){
        int rowsum = 0 ;
        for(int j = 0;  j<n ; j++ ){
            rowsum = rowsum + arr[i][j];
        }
        printf("row %d sum is %d\n", i+1 , rowsum);
    }    

    return 0;
}