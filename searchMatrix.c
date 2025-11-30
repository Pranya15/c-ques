#include <stdio.h>

int searchMatrix(int a[][50], int n, int m, int target) {
    int low = 0, high = n * m - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        int r = mid / m;   // row index
        int c = mid % m;   // column index

        if (a[r][c] == target)
            return 1;
        else if (a[r][c] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
int main() {
    int n, m, target, a[50][50];

    printf("Enter rows & columns: ");
    scanf("%d%d", &n, &m);

    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter target: ");
    scanf("%d", &target);

    if (searchMatrix(a, n, m, target))
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}
