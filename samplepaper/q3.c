 #include<stdio.h>
 int sum(int a, int b) {
 return a + b;
 }

 int main() {
 int x = 5, y = 10;
 printf("%d", sum(x++, ++y));
 return 0;
 }
                