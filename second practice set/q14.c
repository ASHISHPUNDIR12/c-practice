// Determine if a year is a leap year
// instution - and please don't forget this time 
// if year is divisible by 4 and not must not divisilbe by 100 or divisible by 400 
#include <stdio.h>

int main(){
    int year;
     printf("Enter the year\n");
     scanf("%d" , &year);
     if((year%4==0 && year%100 != 0) || (year%400==0)){
        printf("year is leap year");
     }
     else{
        printf("not a leap year ");
     }
    return 0;
}