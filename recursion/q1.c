// print name N times using recursion 
#include <stdio.h>
void print(int i , int N){
    if(i>N){
        return ;
    }
    printf("ashish\n");
    print(i+1 , N);
}
int main(){
    printf("enter the N\n");
    int N ; 
    scanf("%d",&N);
    print(1 , N);
    return 0;
}