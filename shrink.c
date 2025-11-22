#include <stdio.h>

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 33;

    int start = 0;
    int currentSum = arr[0];

    for(int end = 1; end <= n; end++) {

        // Shrink window if current sum is greater than target sum
        while(currentSum > sum && start < end-1) {
            currentSum -= arr[start];
            start++;
        }

        // Check if we found the sum
        if(currentSum == sum) {
            printf("Subarray found between index %d and %d\n", start, end-1);
            return 0;
        }

        // Expand window by adding next element
        if(end < n)
            currentSum += arr[end];
    }

    printf("No subarray found with given sum!\n");
    return 0;
}
