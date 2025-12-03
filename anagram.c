#include <stdio.h>
#include <string.h>

int isAnagram(char *s1, char *s2) {
    int freq[256] = {0};

    if (strlen(s1) != strlen(s2))
        return 0;

    for (int i = 0; s1[i]; i++)
        freq[(unsigned char)s1[i]]++;

    for (int i = 0; s2[i]; i++)
        freq[(unsigned char)s2[i]]--;

    for (int i = 0; i < 256; i++)
        if (freq[i] != 0)
            return 0;

    return 1;
}

int main() {
    char s1[] = "listen";
    char s2[] = "silent";

    if (isAnagram(s1, s2))
        printf("Anagram\n");
    else
        printf("Not anagram\n");
}
