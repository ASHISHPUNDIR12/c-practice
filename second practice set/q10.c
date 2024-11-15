// Counting the Vowels in a String 
#include <stdio.h>
#include <string.h>
int countVowel(char str[]){
    int n = strlen(str);
    int countV = 0; 
    for(int i = 0 ; i<n; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            countV++;
        }
    }
    return countV ;
}
int main(){
   
    char str[100];
    fgets(str , sizeof(str), stdin);
    int value = countVowel(str);
    printf("%d", value);
    return 0;
}