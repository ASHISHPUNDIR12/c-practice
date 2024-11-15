#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str1 = "ashish";
    char *str2 = "pundir";
    int len = strlen(str1) + strlen(str2) + 1;
    char *result = (char *)calloc(len, sizeof(char));
    if(result == NULL){
        printf("memory allocation failed ");
    }
    strncpy(result, str1, strlen(str1));
    strncat(result, str2, strlen(str2));
    printf("%s", result);
    free(result);

    return 0;
}