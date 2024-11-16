// Area of circle
#include <stdio.h>
int circle(int r ){
    float pi = 3.14; 
    int area = pi * r*r ;
    return area ;
}
int main(){
    printf("enter the radius\n");
    int r ;
    scanf("%d", &r);
    float area = circle(r);
    printf("%.2f",area );
    return 0;
}