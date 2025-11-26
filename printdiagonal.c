#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Primary diagonal: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i][i]);
    }

    printf("\nSecondary diagonal: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i][n - 1 - i]);
    }

    return 0;
}
