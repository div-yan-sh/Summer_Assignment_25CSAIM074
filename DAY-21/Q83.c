#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    if (s[0] == '\n') fgets(s, sizeof(s), stdin);

    int vowels = 0, consonants = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i) {
        if (isalpha((unsigned char)s[i])) {
            char ch = tolower((unsigned char)s[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
