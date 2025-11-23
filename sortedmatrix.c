#include <stdio.h>
int main() {
    int rows, cols, key;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[10][10];

    printf("Enter matrix elements (sorted row & column wise):\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Start from top right corner
    int i = 0, j = cols - 1;
    int found = 0;

    while(i < rows && j >= 0) {
        if(a[i][j] == key) {
            printf("Element %d found at position (%d, %d)\n", key, i, j);
            found = 1;
            break;
        }
        else if(a[i][j] > key) {
            j--; // move left
        }
        else {
            i++; // move down
        }
    }

    if(!found) {
        printf("Element %d not found in matrix.\n", key);
    }

    return 0;
}
