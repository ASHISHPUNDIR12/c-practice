// calculate length of string manually without using strlen
#include <stdio.h>

int main(){
   char str[] = "ashish";
   int size = 0 ; 

   while(str[size]!='\0'){
    size++ ;
   }
   printf("%d", size);

    return 0;
}