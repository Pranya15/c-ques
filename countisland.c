#include <stdio.h>

int n, m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int a[][50], int x, int y) {
    a[x][y] = 0; // mark visited

    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 1)
            dfs(a, nx, ny);
    }
}

int main() {
    int a[50][50];
    printf("Enter rows & columns: ");
    scanf("%d%d", &n, &m);

    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int islands = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == 1) {
                islands++;
                dfs(a, i, j);
            }

    printf("Number of islands = %d\n", islands);
    return 0;
}
