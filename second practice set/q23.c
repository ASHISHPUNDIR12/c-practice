// rotate a element by one place left 
#include <stdio.h>
void rotate(int arr1[], int n){
    int temp = arr1[0];
    for(int i = 1 ; i<n; i++){
        arr1[i-1] = arr1[i];
    }
    arr1[n-1] = temp ;
}
int main(){
    printf("Enter the length of first array: \n");
    int n;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    rotate(arr1, n);
     for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}
