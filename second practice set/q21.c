// Remove All Vowels From A String
#include <stdio.h>
#include<string.h>
#include<ctype.h>
void remove_vowel(char str[], char result[]){
    int n = strlen(str);
    int i=0  , j = 0 ;
    for( i = 0 ; i<n; i++){
        if(str[i]!=tolower('a')&& str[i]!=tolower('e')&&str[i]!=tolower('i')&&str[i]!=tolower('o')&&str[i]!=tolower('u')){
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    strcpy(str , result);
}
int main(){
    printf("enter the string\n");
    char str[100];

    fgets(str, sizeof(str), stdin);
    char result[100];
    remove_vowel(str , result);
    printf("%s", str);
    return 0;
}