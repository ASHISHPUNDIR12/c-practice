// Write a function to generate the first n elements of the sequence: 2, 4, 8, 16, ..., 2^n
#include <stdio.h>
#include <math.h>
int main(){
    int n ; 
    scanf("%d",&n);
    for(int i  = 1 ; i<=n ; i++){
        printf(" %d ",(int)pow(2,i) );
    }
    return 0;
}