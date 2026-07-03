#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int freq[256] = {0};
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    if (s[0] == '\n') fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i)
        freq[(unsigned char)s[i]]++;

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i) {
        if (freq[(unsigned char)s[i]] == 1) {
            printf("First non-repeating character: %c\n", s[i]);
            return 0;
        }
    }
    printf("No non-repeating character found\n");
    return 0;
}
