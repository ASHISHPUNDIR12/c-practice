// print fibbonacci series till n 
#include <stdio.h>
int fib(int n ){
    if(n==1){
        return 1 ;
    }
    else if(n==0){
        return 0 ; 
    }
    return fib(n-1) + fib(n-2);

}
int main(){
    int n; 
   int x = 10;   printf("%d", x++ + ++x);
    return 0;
}   