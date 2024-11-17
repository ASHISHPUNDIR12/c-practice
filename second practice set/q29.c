// sum of first N natural number
#include <stdio.h>
int sum(int n){
    int count = 0 ; 
    int i = 1 ; 
    while (i<=n)
    {
        count = count + i ;
        i++ ;
    }
    
    return count; 
}
int main(){
    int n ; 
    printf("enter the n\n");
    scanf("%d", &n);
    int result  = sum(n);
    printf("%d",result);
    return 0;
}