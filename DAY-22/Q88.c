#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000], out[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    if (s[0] == '\n') fgets(s, sizeof(s), stdin);

    int j = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i)
        if (!isspace((unsigned char)s[i])) out[j++] = s[i];
    out[j] = '\0';

    printf("String without spaces: %s\n", out);
    return 0;
}
