// convert kilometers into miles
// formula to convert km into miles 
// 1 km = 1.6miles 
#include <stdio.h>
float convert_miles(int km){
    float miles = km*0.6 ;
    return miles ;
}
int main(){
    printf("enter the kilometer\n");
    int km ;
    scanf("%d", &km);
   
    printf("%.1f",  convert_miles(km));
    return 0 ; 
}