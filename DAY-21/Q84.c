#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    if (s[0] == '\n') fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i)
        putchar(toupper((unsigned char)s[i]));
    putchar('\n');
    return 0;
}
