// moves zero to the end 
#include <stdio.h>
// approach - take a pointer on first zero then swap it with next non zero element 
int main(){
    int arr[] = { 1 , 0 , 5 ,3 ,0 , 3};
    int n = 6; 
    int j = -1 ; 
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==0){
            j = i ; 
            break;
        }
    }
    for(int i = j+1 ; i<n; i++ ){
        if(arr[i]!=0){
          int temp = arr[i]; 
          arr[i] = arr[j];
          arr[j] = temp ;
            j++ ;
        }
        
    }

    
    for(int i = 0 ; i<n  ; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}