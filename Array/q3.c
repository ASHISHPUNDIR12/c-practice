//  rotate a array element by on place ; 
 #include <stdio.h>

int main(){
    int arr[]= { 1 ,2 ,3 , 4,6} ; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = arr[0];
    for(int i = 1 ; i<n; i++){
        arr[i-1] = arr[i]; 

    }
    arr[n-1] = temp;
    for(int i = 0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}