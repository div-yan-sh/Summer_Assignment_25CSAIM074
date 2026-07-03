#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q98: Find common characters in two strings (unique)
int main() {
    char s1[1000], s2[1000];
    int seen1[256] = {0}, seen2[256] = {0};

    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    if (s1[strlen(s1)-1] == '\n') s1[strlen(s1)-1] = '\0';

    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    if (s2[strlen(s2)-1] == '\n') s2[strlen(s2)-1] = '\0';

    for (int i = 0; s1[i]; ++i) seen1[(unsigned char)s1[i]] = 1;
    for (int i = 0; s2[i]; ++i) seen2[(unsigned char)s2[i]] = 1;

    printf("Common characters: ");
    int any = 0;
    for (int c = 0; c < 256; ++c) {
        if (seen1[c] && seen2[c]) { putchar((char)c); any = 1; }
    }
    if (!any) printf("(none)");
    printf("\n");
    return 0;
}
