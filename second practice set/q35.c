//  Write a function to generate the first n elements of the sequence: 2, 4, 8, 16, ..., 2^n
#include <stdio.h>

int main(){
    int n ; 
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++){
        printf("%d ",i*i);
    }
    return 0;
}