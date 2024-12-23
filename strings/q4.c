// Check if a given string is a palindrome (reads the same backward as forward). Ignore case sensitivity.


#include <stdio.h>
#include <ctype.h>
#include <string.h>
// without using any in build string function 
int  checkpalidrome(char str[]){
    int flag = 0 ; 
    // calculate the length of string 
    int size = 0 ;
    
    while(str[size]!='\0'){
        size++;
    }
    // size adjust for last element
    size--; 
    // now check left  elem to right 
    int left = 0; 
    int right = size ;
    while(left<right){
      if(tolower((unsigned char)str[left])!= tolower((unsigned char) str[right])){
       return 1 ; 
      }
      left++;
      right--;
    }
   return 0  ;
}

// with using string functions 

int main(){
    printf("enter the string\n");
    char str[100] ;
    char str2[100] ;
    gets(str);
    // checkpalidrome(str);
    // if(checkpalidrome(str)){
    //     printf("not palidrome");
    // }
    // else printf("palidrom");
    checkpalidrome2(str,str2);
    return 0;
}