// Check If A String Is A Palindrome
// instution - first make it lowercase  then check first elem with last elem and so on and if any elem mismatch then string is not palidrome 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int checkpalidrome(char str[]){
    int flag = 1 ; 
   int i = 0 ; 
   int size = 0 ; 
   while(str[i]!='\0'){
    i++;
    size++;
   }
   for(int i = 0 ; i<size/2 ; i++){
    if(tolower(str[i]) != tolower(str[size-1-i])){
        flag = 0 ;
        break ; 
    }
   }
   return flag ;
}
int main(){
    char str[100];
    fgets(str , sizeof(str), stdin);
    str[strcspn(str, "\n")]= 0 ;
  if(checkpalidrome(str)){
    printf("%s is palidrome", str);
  }
  else{
    printf("%s is not palidrome" ,str );
  }


    
    return 0;
}