// check if number is prime or not
#include <stdio.h>

int main(){
    printf("enter the num you want to check if prime or not\n");
    int n; 
     int isprime = 1 ;
    scanf("%d",&n); 
   
    if(n<=1){
       isprime = 0 ;

    }
    else{
        for(int i = 2 ; i*i<=n; i++){
            if(n%i==0){
                isprime = 0 ; 
            break;
            }
        }
    }
    if(isprime){
        printf("prime");
    }
    else {
        printf("not prime");
    }

    return 0;
}