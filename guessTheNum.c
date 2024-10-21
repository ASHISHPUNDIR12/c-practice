// in the project we are going to make little game in which computer will generate random number and we have to guess that number  
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int randomNum , guess , attempts=0 ;
    srand(time(0));

    randomNum = (rand()%100) +1 ;
     printf("enter your guess sir\n") ; 

    do{
        
        scanf("%d" , &guess); 
        attempts++ ; 

        if(guess>randomNum){
            printf("please enter lower number\n") ;

        }
        else if(guess<randomNum){
            printf("please enter higher number\n");
        }
        else{
            printf("woooffoooo you won the game in %d attempts " , attempts);
        }
    }while(guess!=randomNum);
    return 0 ;

}

