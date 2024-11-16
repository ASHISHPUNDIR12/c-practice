// Removing all occurrences of a character from a string
#include <stdio.h>
#include <string.h>
void remove_char(char str[], char ch)
{
    char result[100];
    int len = strlen(str);
    int j = 0, i = 0;
    for (i = 0; i < len; i++)
    {
        if (str[i] != ch)
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    strcpy(str , result);
}
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    // size_t len = strlen(str);
    // if (len > 0 && str[len - 1] == '\n') {
    //     str[len - 1] = '\0';
    // }
    char ch;
    scanf("%c", &ch);

    remove_char(str, ch);
    puts(str);

    return 0;
}