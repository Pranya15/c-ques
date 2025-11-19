#include <stdio.h>

void printLeaders(int arr[], int n) {
    int max = arr[n-1];  
    printf("%d ", max); // last element is always a leader

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > max) {
            printf("%d ", arr[i]);
            max = arr[i];
        }
    }
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printLeaders(arr, n);
    return 0;
}
