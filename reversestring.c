#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    gets(s);  // For simplicity

    int start = 0;
    int end = strlen(s) - 1;

    while(start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s", s);
    return 0;
}
