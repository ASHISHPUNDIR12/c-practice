// find the largest element
#include <stdio.h>
int largestElem(int arr[] , int n ){
    int maxelem = arr[0];
    for(int i = 0  ; i<n ; i++){
        if (arr[i]> maxelem)
        {
            maxelem = arr[i];
        }
        
    }
    return maxelem ;
}
int main()
{
    int n;
    printf("Enter the length of arr\n");
    scanf("%d", &n);
    int arr[n]; 
    for (int i = 0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    } 
   int max =  largestElem(arr , n );
   printf("the maxx elem is %d" , max);
     
    } 
