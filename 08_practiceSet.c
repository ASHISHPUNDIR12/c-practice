// Create a string using double quotes and print its content using a loop. 
#include<stdio.h>
#include<string.h>
int main(){
    // Which of the following is used to appropriately read a multi-word string. 1. gets() 2. puts() 3. printf() 4. scanf() 
    // answer - gets 

    // Write a program to take string as an input from the user using %c and %s confirm that the strings are equal. 

    // char str[5];
    // printf("enter ");
    // for(int i = 0 ; i<5 ; i++){
    //     scanf("%c", &str[i]);
    // }
    // printf("%s", str);

 
    char str1[100], str2[100];
    char ch;
    int i = 0;

    // Input string using %s
    printf("Enter the first string using %%s: ");
    scanf("%s", str1);

    // Clear the input buffer
    while ((getchar()) != '\n');

    // Input string character by character using %c
    printf("Enter the same string character by character using %%c:\n");
    while ((ch = getchar()) != '\n' && i < 99) {
        str2[i++] = ch;
    }
    str2[i] = '\0';  // Null-terminate the string

    // Compare the two strings
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}




