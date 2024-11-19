#include <stdio.h>

void countFrequency(int arr[], int size) {
    int visited[size];
    
    // Initialize all elements of visited to 0
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        // If the element is already counted, skip it
        if (visited[i] == 1) {
            continue;
        }

        int count = 1; // Count the current element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark this element as counted
            }
        }
            
        printf("Element %d occurs %d time(s)\n", arr[i], count);
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Frequency of elements in the array:\n");
    countFrequency(arr, size);

    return 0;
}
