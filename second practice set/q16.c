// dot product of 2 array
#include <stdio.h>

int main(){
    int v1[] = {1 ,2 , 3};
    int v2[] = {1 ,2 , 3};
    int result[3];

int sum = 0 ;
    for(int i = 0 ; i<3; i++){
        result[i] = v1[i]*v2[i];
        sum = sum + result[i] ;
    }
    printf("%d" , sum);


    return 0;
}