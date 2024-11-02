// sum of first n numbers 
// parameterised recursion 
#include <stdio.h>
void print(int N , int sum){
    if(N<1){
        printf("%d", sum);
        return ;
    }
    print(N-1 , sum+N);
}
int main(){
    int N ; 
    printf("enter the N\n ");
    scanf("%d", &N);
    print(N , 0);
    return 0;
}