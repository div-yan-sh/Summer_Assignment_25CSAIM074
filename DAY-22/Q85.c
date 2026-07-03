#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    if (s[0] == '\n') fgets(s, sizeof(s), stdin);

    int j = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i) {
        if (isalnum((unsigned char)s[i])) {
            t[j++] = tolower((unsigned char)s[i]);
        }
    }
    t[j] = '\0';

    int i = 0, k = j - 1;
    int palindrome = 1;
    while (i < k) {
        if (t[i++] != t[k--]) {
            palindrome = 0;
            break;
        }
    }
    if (palindrome) printf("String is a palindrome (ignoring case & non-alphanumerics)\n");
    else printf("String is not a palindrome\n");
    return 0;
}
