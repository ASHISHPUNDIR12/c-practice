// print in terms of N to 1 
#include <stdio.h>
void print(int i , int N ){
   if(i>N){
    return ; 
   }
   printf("%d", N);
   print(i , N-1);
}
int main(){
      printf("enter the N\n");
    int N ; 
    scanf("%d",&N);
    print(1 , N);
    return 0;
}