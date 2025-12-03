#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int visited[256] = {0};
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = str[i];

        if (visited[c] == 0) {
            visited[c] = 1;
            str[index++] = c;
        }
    }
    str[index] = '\0';
}

int main() {
    char str[100] = "aabbccddeeffg";
    removeDuplicates(str);
    printf("After removing duplicates: %s\n", str);
    return 0;
}
