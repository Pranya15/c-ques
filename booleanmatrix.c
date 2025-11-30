#include <stdio.h>

int main() {
    int n, m;
    int a[50][50], row[50] = {0}, col[50] = {0};

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (row[i] == 1 || col[j] == 1)
                a[i][j] = 1;

    printf("Updated Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
