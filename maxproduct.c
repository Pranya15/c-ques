#include <stdio.h>

int maxProduct(int arr[], int n) {
    int currMax = arr[0], currMin = arr[0], answer = arr[0];

    for (int i = 1; i < n; i++) {

        // If negative, swap
        if (arr[i] < 0) {
            int temp = currMax;
            currMax = currMin;
            currMin = temp;
        }

        currMax = (arr[i] > arr[i] * currMax) ? arr[i] : arr[i] * currMax;
        currMin = (arr[i] < arr[i] * currMin) ? arr[i] : arr[i] * currMin;

        if (currMax > answer)
            answer = currMax;
    }

    return answer;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Maximum Product Subarray = %d", maxProduct(arr, n));
    return 0;
}
