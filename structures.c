#include <stdio.h>
#include <string.h>

struct myStruct
{
    int num;
    float percentage;
    char grade;
    char name[20];
};
int main()
{
    struct myStruct ashish = {12 , 72.6 , 'a', "ashish"}; 

    // ashish.num = 99;
    // ashish.percentage = 99.99;
    // ashish.grade = 'a';
    strcpy(ashish.name, "kutti");

    printf("%d\n", ashish.num);
    printf("%s", ashish.name);
    return 0;
}


