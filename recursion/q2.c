// print linearly from 1 to N 
#include <stdio.h>
void print(int i , int N ){
    if(i>N){
        return;
    }
    printf("%d" , i);
    print(i+1  , N);
}
int main(){
    int N ; 
    printf("enter the N\n ");
    scanf("%d", &N); 
     print(1 , N); 

    return 0;
}