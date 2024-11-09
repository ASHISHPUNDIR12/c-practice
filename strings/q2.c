// String Copy: Implement a function to copy one string to another without using the strcpy() function.
#include <stdio.h>
// copying the string without inbuilt function 
void copy (char str[], char copystr[]){
    int i = 0 ;
 
    while(str[i]!=0){
        copystr[i] = str[i];
        i++ ;
    }
    copystr[i] = '\0';
}

int main(){
    char str[] = "ashish acha bcha";
    char copystr[50];
    copy(str, copystr);
    printf("str is : %s\n" , str);
    printf("copystr is : %s" , copystr);

    return 0;
}