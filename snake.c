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

    printf("\nSnake Pattern:\n");
    for(int i = 0; i < r; i++){
        
        // Even row - left to right
        if(i % 2 == 0){
            for(int j = 0; j < c; j++)
                printf("%d ", a[i][j]);
        }
        // Odd row - right to left
        else{
            for(int j = c - 1; j >= 0; j--)
                printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
