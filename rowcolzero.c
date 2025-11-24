#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[10][10], row[10] = {0}, col[10] = {0};

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Step 1: Mark rows and columns
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: Update matrix based on marks
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (row[i] == 1 || col[j] == 1) {
                a[i][j] = 0;
            }
        }
    }

    // Print final matrix
    printf("Matrix after setting rows and columns to zero:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
