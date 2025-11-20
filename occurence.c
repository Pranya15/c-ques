#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 5, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int c = 2; 
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == c) {
            count++;
        }
    }
    
    printf("Element %d occurs %d times", c, count);
    return 0;
}
