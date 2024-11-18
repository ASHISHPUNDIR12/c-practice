#include <stdio.h>
     void test(int *p, int *q) {
 int temp = *p;
 *p = *q;
 *q = temp;
 }
int main(){
    int a = 10, b = 20;
 test(&a, &b);
 printf("%d %d", a, b);
    return 0;
}