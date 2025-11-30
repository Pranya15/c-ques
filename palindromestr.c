#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    gets(s); // for simplicity

    int start = 0;
    int end = strlen(s) - 1;
    int flag = 1;  // assume palindrome

    while(start < end) {
        if(s[start] != s[end]) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
