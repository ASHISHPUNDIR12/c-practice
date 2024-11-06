// find the missing number  
#include <stdio.h>

int main(){
    int arr[] = {1 ,2 , 3  , 5 , 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int N  = 5 ;
    int flag =  0    ; 
    for(int i=1 ; i<=N ;i++){
        flag = 0 ; 
        for(int j = 0; j<n ; j++){
            if(arr[j]==i){
                flag = 1; 
                break;
            }
        }
        if(!flag){
            printf("missing element is %d" , i);
        }
    }
    return 0;
   
}