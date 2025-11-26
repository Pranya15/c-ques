#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nBoundary Traversal:\n");

    // If only one row  
    if(r == 1){
        for(int j = 0; j < c; j++)
            printf("%d ", a[0][j]);
        return 0;
    }

    // If only one column 
    if(c == 1){
        for(int i = 0; i < r; i++)
            printf("%d ", a[i][0]);
        return 0;
    }

    // 1. Top row
    for(int j = 0; j < c; j++)
        printf("%d ", a[0][j]);

    // 2. Right column
    for(int i = 1; i < r; i++)
        printf("%d ", a[i][c-1]);

    // 3. Bottom row
    for(int j = c-2; j >= 0; j--)
        printf("%d ", a[r-1][j]);

    // 4. Left column
    for(int i = r-2; i >= 1; i--)
        printf("%d ", a[i][0]);

    return 0;
}
