#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input matrix sizes
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    // Check multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];

    // Input matrix A
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    // Input matrix B
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            C[i][j] = 0;

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {          // rows of A
        for (int j = 0; j < c2; j++) {      // columns of B
            for (int k = 0; k < c1; k++) {  // columns of A / rows of B
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
