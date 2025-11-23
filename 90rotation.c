#include <stdio.h>

int main() {
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int a[10][10];

    printf("Enter matrix elements:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // Step 1: Transpose the matrix
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            int temp = a[i][j];
            a[i][j] = a[i][n-j-1];
            a[i][n-j-1] = temp;
        }
    }

    printf("\nMatrix after 90 degree rotation:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
