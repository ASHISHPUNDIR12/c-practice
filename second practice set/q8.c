// Convert Celsius to Fahrenheit
#include <stdio.h>
float toFaherenite(float c){
    float f = c*(9/5)+32;
    return f; 
}
int main(){
    float celcius ;
    printf("enter the celcius\n");
    scanf("%f", &celcius);
    float fahernite = toFaherenite(celcius);
   printf("%f",fahernite) ;
    return 0;
}