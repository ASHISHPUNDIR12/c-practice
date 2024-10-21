#include<stdio.h>

float Average(float a ,float b ,float c){
    return (a+b+c)/3;
}
float farhrenite(float  c){
    float value = (c*9/5)+32 ;
    return value;
}
float MG(float m){
    return m*9.8;
}
int fibonacci(int n){
    if(n==0){
        return 0; 
    }
    else if (n==1){
        return 1 ; 
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2) ;
    }
}
int sumOfnatural(int n){
     int sum = 0 ; 
    if (n==1)
    {
        return 1;
    }
    
    else{
        return n+sumOfnatural(n-1);

    }

 }
  void  pattern(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
    
    
   

}
int main(){
    //  Write a program using function to find average of three numbers.

//     float num1 , num2  , num3;
//     printf("Enter the 3 numbers you want to find avg\n" );
//     scanf("%f %f %f" , &num1, &num2, &num3 );
//    float avg =  Average(num1, num2 , num3);
//    printf("avg is %.2f" , avg);

// Write a function to convert Celsius temperature into Fahrenheit. 

// float celcius ; 
// printf("enter the celcius\n");
// scanf("%f" , &celcius);
//  float result = farhrenite(celcius);

//     printf("%.2f fahrenite " , result);
//     return 0 ; 

//   Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.

// float m ; 
// printf("enter the mass");
// scanf("%f" , &m );

// float force = MG(m) ;
// printf("force of attraction is %.2f" , force );
// return 0 ;


    // Write a program using recursion to calculate nth element of Fibonacci series.
    // int n ; 
    // printf("enter the nth\n") ; 
    // scanf("%d", &n);

    // printf("%d" ,  fibonacci(n) );

    // int a = 4; 
    // printf("%d %d %d \n", a, ++a, a++);
    // output is 6 6 4 because evualtion order in right to left in this case ; 

    // Write a recursive function to calculate the sum of first ‘n’ natural numbers. 

    // int n ; 
    // printf("enter the num ");
    // scanf("%d",&n);
    // int value = sumOfnatural(n);
    // printf("%d" , value);
  
  
    //  Write a program using function to print the following pattern (first n lines)


    // int n ; 
    // printf("enter the n\n");
    // scanf("%d" , &n);
    // pattern(n);

}

