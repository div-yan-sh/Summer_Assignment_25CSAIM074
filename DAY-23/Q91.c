#include <stdio.h>
#include <string.h>
#include <ctype.h>

void normalize(const char *src, char *dst) {
    int j = 0;
    for (int i = 0; src[i] != '\0' && src[i] != '\n'; ++i)
        if (!isspace((unsigned char)src[i]))
            dst[j++] = tolower((unsigned char)src[i]);
    dst[j] = '\0';
}

int main() {
    char s1[1000], s2[1000], a[1000], b[1000];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    if (s1[0] == '\n') fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    if (s2[0] == '\n') fgets(s2, sizeof(s2), stdin);

    normalize(s1, a);
    normalize(s2, b);

    int freq[256] = {0};
    for (int i = 0; a[i] != '\0'; ++i) freq[(unsigned char)a[i]]++;
    for (int i = 0; b[i] != '\0'; ++i) freq[(unsigned char)b[i]]--;

    int anagram = 1;
    for (int i = 0; i < 256; ++i)
        if (freq[i] != 0) { anagram = 0; break; }

    if (anagram) printf("Strings are anagrams (ignoring spaces & case)\n");
    else printf("Strings are not anagrams\n");

    return 0;
}
