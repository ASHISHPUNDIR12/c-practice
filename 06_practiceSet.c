#include<stdio.h>
void address(int* a ){
    printf("%p" , a);
}
void  multiplay(int* n){
    *n = *n *10 ;
  
}
void change(int* x){
    *x = *x + 10; 
}
void change2(int x){
    x = x + 10; 
}
int  avg(int*a , int*b){
    int average = (*a + *b)/2;
}
int main(){
    // Write a program to print the address of a variable. Use this address to get the value of the variable. 

    // int a = 72 ; 
    // int* b = &a ; 
    // printf("%p\n" , b);
    // printf("%p\n" , &a);
    // printf("%d\n" , *b );
    // printf("%d" , *(&a) );


    // Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why? 
    // ans - well adress not be same 
    // but if we pass by refrence means i we will pass the address of i then it will give the same address; 

    // int i ; 
    // printf("%p\n" , &i);
    // address(&i);

    // Write a program to change the value of a variable to ten times of its current value. 

    // int n ; 
    // printf("enter the value\n");
    // scanf("%d" , &n);
    // multiplay(&n);
    // printf("%d" , n);
    // Write a function and pass the value by reference. 
    // int a = 10 ;
    // change(&a);
    // printf("%d" , a);
    
    // now if i dont pass the address 
    //     int b = 10 ;
    // change2(b);
    // printf("%d" , b);
    // it will still print 10 because i am passing the value not address

    // Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main(). 

    // int a = 10;
    // int b = 2 ;
    // int val = avg(&a , &b);
    // printf("avg of %d and %d is %d" , a , b, val );

    // Write a program to print the value of a variable i by using “pointer to pointer” type of variable.
    // int i = 10 ; 
    // int* p = &i;
    // int** pp = &p ;

    // printf("%d" , **pp);

    //  Try problem 3 using call by value and verify that it does not change the value of the said variable. 
    // already done 😇


}
