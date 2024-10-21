#include <stdio.h>
void reverseArr(int arr[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    int temp;
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
}

int filterArr(int arr[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      count++;
    }
  }
  return count;
}
int main()
{
  //    Write a program to accept marks of five students in an array and print them on the screen

  // int marks[5];
  // for(int i=0; i<5; i++){
  //     printf("enter the marks of subject%d " , i+1);
  //     scanf("%d" , &marks[i]);
  // }
  //   for(int i=0; i<5; i++){
  //     printf("%d" , marks[i]);
  //     printf(" ");
  // }
  // return 0 ;

  // Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

  // int arr[10] = {1 , 2, 3 , 4 , 5 , 6 ,7 ,8, 9 ,10};
  // int* ptr = &arr[0];

  // printf("%d\n" ,*ptr);
  // printf("%d" , *ptr+2);
  // return 0 ;
  //  Write a program to create an array of 10 integers and store multiplication table of 5 in it.

  // int table[10];

  // for (int i = 0; i < 10; i++){
  //     table[i] = 5*(i+1);
  // }
  // for(int i =0 ; i<10 ; i++){
  //     printf("%d\n" , table[i]);

  // }

  // Repeat problem 3 for a general input provided by the user using scanf.

  // just use scanf and take the value of n and the replace it with 5

  // Write a program containing a function which reverses the array passed to it.

  //  int n ;
  //  printf("Enter the length of Array\n");
  //  scanf("%d" , &n);

  // int  arr[n];
  // printf("enter the elements\n");
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d" , &arr[i]);
  // }
  // reverseArr(arr , n );
  // for(int i = 0  ; i<n ; i++){
  //   printf("%d" , arr[i]);
  //   printf(" ");
  // }

  // Write a program containing functions which counts the number of positive integers in an array.
  //   int arr[] = {10  , 2 , -3 ,  0  };
  //   int n = sizeof(arr)/sizeof(arr[0]);

  //   int count = filterArr(arr , n);

  //  printf("no of posivite integer is %d" , count);

  // Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

  int arr[3][10];
  int table[] = {2, 7, 9};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 1; j < 11; j++)
    {
      arr[i][j - 1] = table[i] * j;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 1; j < 11; j++)
    {
      printf("%d", arr[i][j - 1]);

      printf(" ");
    }
    printf("\n");
  }
}