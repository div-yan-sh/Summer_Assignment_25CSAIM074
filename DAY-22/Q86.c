#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    if (s[0] == '\n') fgets(s, sizeof(s), stdin);

    int in_word = 0, count = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i) {
        if (!isspace((unsigned char)s[i]) && !in_word) {
            in_word = 1;
            count++;
        } else if (isspace((unsigned char)s[i])) {
            in_word = 0;
        }
    }
    printf("Word count = %d\n", count);
    return 0;
}
