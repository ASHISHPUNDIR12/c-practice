#include <stdio.h>

int main(){
    printf("enter the num\n");
    int n ; 
    scanf("%d",&n);
    int temp = n  ;
    // reversing the num 
    int reverse = 0 ; 
    int reminder ;

    while(n!=0){
        // getting the last digit
        reminder  = n%10;
        // appending it in reverse
        reverse = reverse*10 + reminder ;
        // removing the last elem
        n = n/10 ;
    }
    n = temp ; 
    // printf("%d", reverse);
    if(n==reverse){
        printf("palidrome");
    }
    else{
        printf("not palidrome");
    }
    return 0;
}