#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char s[2000];
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s);
    if (n > 0 && s[n-1] == '\n') s[n-1] = '\0';

    int bestStart = -1, bestLen = 0;
    int i = 0;
    while (s[i]) {
        while (s[i] && isspace((unsigned char)s[i])) i++;
        int start = i;
        int len = 0;
        while (s[i] && !isspace((unsigned char)s[i])) { i++; len++; }
        if (len > bestLen) { bestLen = len; bestStart = start; }
    }

    if (bestStart >= 0) {
        char word[1000];
        strncpy(word, s + bestStart, bestLen);
        word[bestLen] = '\0';
        printf("Longest word: %s (length %d)\n", word, bestLen);
    } else {
        printf("No words found\n");
    }
    return 0;
}
