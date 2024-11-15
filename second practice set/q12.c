// Flip a string's lowercase characters to uppercase and vice versa
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[] = "AbcD";
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("%s", str);

    return 0;
}