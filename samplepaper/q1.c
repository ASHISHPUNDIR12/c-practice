// Write a function to generate the sequence: 1, 2, 3, ..., n, but replace all multiples of 5 with -1.
#include <stdio.h>

void series(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            printf("-1 ");
        } else {
            printf("%d ", i);
        }
    }
}

int main() {
    printf("Enter the number till you want:\n");
    int n;
    scanf("%d", &n); // Take input from the user
    series(n);       // Call the series function
    return 0;
}
