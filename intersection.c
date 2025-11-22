#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 4, 6, 8};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int i = 0, j = 0;

    printf("Intersection: ");

    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    return 0;
}
