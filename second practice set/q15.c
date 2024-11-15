// vector addition 
#include <stdio.h>
void vector(int v1[], int v2[], int result[] , int n ){
    for(int i = 0 ; i<n ; i++){
        result[i] = v1[i] + v2[i];
    }
}
int main(){
    int  n = 3 ;
    int v1[] = {1 ,2 ,3};
    int v2[] = {12 ,1 ,2};
    
    int result[n] ;
    vector(v1 , v2 , result, n);
    for(int i = 0 ; i<n; i++){
        printf("%d ", result[i]);
    }


    return 0;
}