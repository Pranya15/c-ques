#include <stdio.h>
#include <string.h>

void countAndSay(int n, char *result) {
    char curr[5000] = "1";
    char next[5000];

    for (int step = 1; step < n; step++) {
        int i = 0, idx = 0;
        while (curr[i] != '\0') {
            char ch = curr[i];
            int count = 0;

            while (curr[i] == ch) {
                count++;
                i++;
            }

            idx += sprintf(next + idx, "%d%c", count, ch);
        }
        strcpy(curr, next);
    }
    strcpy(result, curr);
}

int main() {
    int n = 5;
    char result[5000];
    countAndSay(n, result);
    printf("Term %d: %s", n, result);
}
