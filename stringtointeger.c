#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int myAtoi(char *s) {
    long result = 0;
    int sign = 1;

    while (*s == ' ') s++;

    if (*s == '+' || *s == '-') {
        if (*s == '-') sign = -1;
        s++;
    }

    while (isdigit(*s)) {
        result = result * 10 + (*s - '0');

        if (result > INT_MAX)
            return sign == 1 ? INT_MAX : INT_MIN;

        s++;
    }
    return result * sign;
}

int main() {
    printf("%d", myAtoi("  -42"));
}
