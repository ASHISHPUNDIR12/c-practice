// String Length: Write a function that calculates the length of a given string without using the strlen() function
#include <stdio.h>
#include <string.h>
int length(char str[])
{
    int i = 0;
    int size = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    return size;
}
int main()
{
    char str[] = "hello world";
    printf("%d", length(str));
    return 0 ; 
}