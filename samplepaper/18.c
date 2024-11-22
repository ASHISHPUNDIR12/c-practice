// prime
#include <stdio.h>

int main(){
    int n  = 4;
    int isprime = 1; 
    if(n<2){
        printf("not prime");
    }
    for(int i = 2 ; i*i<=n; i++){
        if(n%i==0){
          isprime = 0 ;
        }
    }
   if(isprime){
    printf("prime");

   }
   else{

    printf("not prime");
   }
    return 0;
}