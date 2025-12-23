#include <stdio.h>

void process(char c, int *u, int *l, int *d, int *s) {
    if (c >= 'A' && c <= 'Z') {
        *u = *u + 1;
    } 
    else if (c >= 'a' && c <= 'z') {
        *l = *l + 1;
    } 
    else if (c >= '0' && c <= '9') {
        *d = *d + 1;
    } 
    else {
        *s = *s + 1;
    }
}

int main() {
    char text[101];
    int countUpper = 0;
    int countLower = 0;
    int countDigit = 0;
    int countOther = 0;
    int i;

    if (scanf("%100s", text) != 1) {
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++) {
        process(text[i], &countUpper, &countLower, &countDigit, &countOther);
    }

    printf("Uppercase: %d\n", countUpper);
    printf("Lowercase: %d\n", countLower);
    printf("Digits: %d\n", countDigit);
    printf("Special/Other: %d\n", countOther);

    return 0;
}
