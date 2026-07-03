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

    int maxf = 0;
    unsigned char ch = 0;
    for (int i = 0; i < 256; ++i)
        if (freq[i] > maxf) { maxf = freq[i]; ch = (unsigned char)i; }

    if (maxf > 0)
        printf("Maximum occurring character: '%c' (count %d)\n", ch, maxf);
    else
        printf("String is empty\n");
    return 0;
}
