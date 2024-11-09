// *String Concatenation*: Write a function to concatenate two strings without using strcat().
#include <stdio.h>
void concatnation(char str1[], char str2[], char result[]){
    int i = 0  ;
    int j = 0 ;
    // copy str1 in result 
    while(str1[i]!='\0'){
        result[i] = str1[i];
        i++;
    }
    // concatinate str2 in result 
     while(str2[j]!='\0'){
        result[i] = str2[j];
        j++;
        i++;
    }
    result[i] = '\0';
}
int main(){
    char str1[] = "ashish loves ";
    char str2[] = "noone";
    char result[50];
    concatnation(str1, str2 , result);
    printf(" concatinate string is : %s" , result) ;
    return 0;
}
