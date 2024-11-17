// merge two sorted array
#include <stdio.h>
void Merge_arr(int a1[], int n1 , int a2[], int n2,  int result[] , int N){
int i=0 , j =0 , k = 0; 
while (i<n1 && j<n2)
{
    if(a1[i]<a2[j]){
        result[k] = a1[i];
        i++; 
        k++;
    }
    else{
        result[k] = a2[j];
        j++ ;
        k++ ;
    }

}
while(i<n1){
    result[k] = a1[i];
    i++ ;
     k++  ;
}
while(j<n2){
    result[k] = a2[j];
    j++ ;
     k++  ;
}


}
int main(){
    int a1[] = {1 ,2 ,3 ,4 ,5 ,10};
    int a2[] = {2 , 4, 7, 9 ,10 };
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);
    int N = n1+n2;
    int result[N];
    Merge_arr(a1, n1,  a2, n2 , result , N);
    for(int i = 0 ; i<N ; i++){
        printf("%d ",result[i]);
    }
    return 0;
}