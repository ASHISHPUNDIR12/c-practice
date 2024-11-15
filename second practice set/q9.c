// Computing the Fibonacci Sequence
#include <stdio.h>
void fibbonaciseries(int n ){
    int a = 0 , b = 1 , next ; 
    for(int i = 0 ; i<n ; i++){
        printf("%d " , a);
        next = a+b ;
        a = b ; 
        b = next ;
    }
}
int main(){
    int n ; 
    printf("enter the n\n");
    scanf("%d" , &n);
    fibbonaciseries(n);

    return 0;
}