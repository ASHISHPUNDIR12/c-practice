// Reverse the given string without using any built-in functions.
#include <stdio.h>
void reverse(char str[]){
    // calculate the size of str
    int size = 0 ;
    while (str[size]!='\0')
    {
       size++;
    }
    // reverse the string 
    int i = 0 ; 
    while(i<size){
        int temp = str[i];
        str[i] = str[size-1];
        str[size-1] =temp ;
        i++ ;
        size-- ;
    }
    
}
int main (){
    char str[] = "hello world";
    reverse(str);
    printf("%s", str);
}