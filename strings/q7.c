// reverse words in c
// instution - first reverse the whole string the reverse the character
#include <stdio.h>
void reverse(char str[] ,int start , int end )
{
   
    // reverse the string
   
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end - 1];
        str[end - 1] = temp;
        start++;
        end--;
    }
}

void reverseword(char str[])

{
     // calculate the size of str
    int size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    // reversed whole string 

    reverse(str , 0 , size-1);
    int wordstart = 0 ; 
    for(int i = 0; i<size ; i++){
        if(str[i] == ' ' || str[i]=='\0'){
            reverse(str , wordstart ,i);
            wordstart = i+1 ;
        }
    }
}
int main()
{
    char str[] = "mera name ashish ";
    reverseword(str);
    printf("%s",str);

    return 0;
}