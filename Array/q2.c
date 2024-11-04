// find the second largest elem ;
#include <stdio.h>
// common approach not brute but bit better approach  
int secondLargest(int arr[], int n){
 int maxelem = arr[0];
    for(int i = 0  ; i<n ; i++){
        if (arr[i]> maxelem)
        {
            maxelem = arr[i];
        }
        
    }
     int secondlarge = arr[0]; 
    for(int i = 0 ; i<n; i++){
       
        if(arr[i]>secondlarge && arr[i]!= maxelem){
            secondlarge = arr[i];
            
        }
    }
    return secondlarge ;
}

int main(){
     int n;
    printf("Enter the length of arr\n");
    scanf("%d", &n);
    int arr[n]; 
    for (int i = 0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    } 
    int secondlarge = secondLargest(arr , n );
    printf("second large elem %d" , secondlarge);
    return 0;
}