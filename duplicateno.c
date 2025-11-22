#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int freq[n]; 

    // Initialize frequency array with 0
    for(int i = 0; i < n; i++)
        freq[i] = 0;

    // Check duplicates
    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            printf("Duplicate number is: %d\n", arr[i]);
            return 0;
        }
        freq[arr[i]]++;
    }

    printf("No duplicate found.\n");
    return 0;
}
