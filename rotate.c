#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int last = arr[n-1]; // Step 1: Store last element

    // Step 2: Shift elements to the right
    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    // Step 3: Put last element at the first position
    arr[0] = last;

    // Print rotated array
    printf("Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
