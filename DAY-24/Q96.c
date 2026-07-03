#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q96: Remove duplicate characters, keep first occurrence
int main() {
    char s[1000];
    printf("Enter a string: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s);
    if (n > 0 && s[n-1] == '\n') s[n-1] = '\0';

    int seen[256] = {0};
    char out[1000];
    int j = 0;
    for (int i = 0; s[i]; ++i) {
        unsigned char c = (unsigned char)s[i];
        if (!seen[c]) {
            seen[c] = 1;
            out[j++] = s[i];
        }
    }
    out[j] = '\0';
    printf("String without duplicates: %s\n", out);
    return 0;
}
