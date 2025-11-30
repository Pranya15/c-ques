#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int maxHistogram(int h[], int m) {
    int stack[100], top = -1;
    int maxArea = 0, area;

    for (int i = 0; i <= m; i++) {
        int height = (i == m) ? 0 : h[i];

        while (top != -1 && height < h[stack[top]]) {
            int ht = h[stack[top--]];
            int width = (top == -1) ? i : i - stack[top] - 1;
            area = ht * width;
            maxArea = max(maxArea, area);
        }
        stack[++top] = i;
    }

    return maxArea;
}

int main() {
    int n, m;
    int a[50][50], height[50] = {0};

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            height[j] = (a[i][j] == 1) ? height[j] + 1 : 0;

        ans = max(ans, maxHistogram(height, m));
    }

    printf("Maximum rectangle = %d\n", ans);
    return 0;
}
