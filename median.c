#include <stdio.h>

int countLessEqual(int row[], int m, int x) {
    int l = 0, r = m - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (row[mid] <= x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;
}

int main() {
    int n, m;
    int a[50][50];

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int low = a[0][0], high = a[0][m - 1];
    for (int i = 1; i < n; i++) {
        if (a[i][0] < low) low = a[i][0];
        if (a[i][m-1] > high) high = a[i][m-1];
    }

    int desired = (n*m + 1) / 2;

    while (low < high) {
        int mid = (low + high) / 2;
        int count = 0;

        for (int i = 0; i < n; i++)
            count += countLessEqual(a[i], m, mid);

        if (count < desired)
            low = mid + 1;
        else
            high = mid;
    }

    printf("Median = %d\n", low);
    return 0;
}
