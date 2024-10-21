#include <stdio.h>
#include <stdlib.h>
int main(){
    int* students ; 
    int n = 20 ;
    students = calloc(n , sizeof(*students));
    printf("%d", n * sizeof(*students) );

    return 0;
}