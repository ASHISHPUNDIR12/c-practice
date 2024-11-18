#include <stdio.h>
void sequence(int n ){
    int increaing = 1 ; 
    int decreasing = 23 ; 
    for(int i = 0 ; i<n; i++){
        if(i%2==0){
            printf("%d ",increaing);
            increaing++ ;
        }
        else{
            printf(" %d ",decreasing);
            decreasing--;
        }
    }
}
int main(){
    //  printf("enter the n ");
    //  int n ; 
    //  scanf("%d",&n);
     sequence(10);
    return 0;
}