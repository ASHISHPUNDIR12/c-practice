// Write a program that counts the number of vowels and consonants in a given string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void count(char str[], int *vowel, int *constant)
{
    *vowel = 0;
    *constant = 0;
    int i = 0;

    while (i < strlen(str))
    {
        int ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                (*vowel)++;
            }
            else
            {
                (*constant)++;
            }
         
        }
           i++;
    }
}
int main()
{
    int vowel;
    int constant;

    char str[100];
    printf("enter the string\n");
    gets(str);
    count(str, &vowel, &constant);
    printf("vowel count = %d\n constant count = %d", vowel, constant);
    return 0;
}