//  Write a program to print multiplication table of a given number n.
#include <stdio.h>

void table(int n)
{

    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", n, i, n * 1);
    }
    return;
}
void table2(int x)
{
    for (int i = 10; i > 0; i--)
    {
        printf("%d X %d = %d\n", x, i, x * i);
    }
    return;
}
int table3(int x)
{
    int sum = 0;
    for (int i = 0; i < 11; i++)
    {
        sum = sum + x * i;
    }
    return sum;
}

int factorial(int x)
{
    long long value = 1;
    if (x < 0)
    {
        printf("not defiend ");
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            value *= i;
        }
    }
    return value;
}

int main()
{
    // int n ;
    // printf("enter the num you want table\n");

    // scanf("%d" , &n);
    // printf("---------------------------------------------------------------------------------------------\n");
    // table(n);
    // return 0 ;

    // Write a program to print multiplication table of 10 in reversed order
    //   table2(10);
    //   return 0 ;

    // Write a program to sum first ten natural numbers using while loop.

    //     int i=1 ,  sum=0 ;
    //    while(i<11){
    //     sum +=i ;
    //     i++;
    //    }
    //    printf("%d" , sum );

    // Write a program to implement program above  using ‘for’ and ‘do-while’ loop.
    // using for loop
    // int sum = 0 ;
    //  for(int i = 1 ; i<11 ; i++ ){
    //     sum+=i ;

    //  }
    //  printf("%d" , sum ) ;
    //  return 0 ;

    // using do while loop
    // do while loop run run alteast one time even condition is not matched thats why i initialized i value to 0
    // int i=0 , sum = 0 ;

    // do{
    //     sum+=i ;
    //     i++;
    // } while(i<11) ;
    //  printf("%d" , sum ) ;

    // Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10).

    // int n ;
    // printf("enter the table no\n ");
    // scanf("%d" , &n) ;

    // printf("sum of multiplication of %d is %d " , n , table3(n));

    //  Write a program to calculate the factorial of a given number using a for loop.

    // int n ;
    // printf("enter the number\n ") ;
    // scanf("%d" , &n) ;
    // int value = factorial(n) ;
    // printf("%d" , value ) ;

    // same question with while loop

    // int value = 1 ,  i=1 ;
    // while (i<=5 ){
    //     value*=i;
    //     i++;
    // }
    // printf("%d" , value );

    // Write a program to check whether a given number is prime or not using loops.

    // int n;
    // int flag = 0;
    // printf("enter the value you want to check\n");
    // scanf("%d", &n);

    // if (n <= 1)
    // {
    //     printf("%d is not a prime number", n);
    // }
    // else
    // {
    //     for (int i = 2; i < n / 2; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             flag = 1;
    //         }
    //     }
    // }
    // if(flag==0){
    //     printf("%d is prime numbers ", n) ;
    // }
    // else{
    //     printf("%d is not a prime number " , n) ; 
    // }
    // return 0 ; 


    
}
