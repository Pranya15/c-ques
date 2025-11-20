#include <stdio.h>
int main() {
    int arr[] = {1, -2, 3, -4, -5, 6};
    int n = 6;
    int pos[n], neg[n];
    int p = 0, q = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }

    int i = 0, j = 0, k = 0;

    while (i < p && j < q) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++]; 
    }

    while (i < p)
        arr[k++] = pos[i++];

    while (j < q)
        arr[k++] = neg[j++];

    for (int x = 0; x < n; x++) {
        printf("%d ", arr[x]);
    }
    return 0;
}
