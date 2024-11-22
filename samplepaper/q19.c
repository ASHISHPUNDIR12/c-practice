#include <stdio.h>

int main() {
    int n;
    printf("Enter the length of the array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        while (num > 0) {
            totalSum += num % 10;  // Extract the last digit and add it to the sum
            num /= 10;             // Remove the last digit
        }
    }

    printf("Sum of digits of array elements = %d\n", totalSum);
    return 0;
}
