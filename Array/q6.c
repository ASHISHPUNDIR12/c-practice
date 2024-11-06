// linear search
#include <stdio.h>

int main()
{
    int num , found = 0;
    int arr[5] = {1, 2, 3, 6, 7};
    printf("enter the elem you want to find in array\n");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            printf("yes %d is present in arry at %d index", num, i);
        }
        found = 1 ; 

       
    }
   if(!found){
     printf("no  %d is  not present in arry ", num );
   }

    return 0;
}