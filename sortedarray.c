#include <stdio.h>

int checkSortedRotated(int arr[], int n) {
    int count = 0;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1])
            count++;
    }

    // Also check last element with first (for rotation)
    if(arr[n-1] > arr[0])
        count++;

    // If count > 1 → Not sorted & rotated
    return (count == 1);
}

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(checkSortedRotated(arr, n))
        printf("Array is sorted and rotated\n");
    else
        printf("Array is NOT sorted and rotated\n");

    return 0;
}
