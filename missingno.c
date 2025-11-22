#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    int sum = 0;

    //actual sum
    for(int i = 0; i < n-1; i++) {
        sum += arr[i];
    }

    // Calculate expected sum using formula
    int expectedSum = n * (n + 1) / 2;

    // Missing number = expected - actual
    int missing = expectedSum - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}
