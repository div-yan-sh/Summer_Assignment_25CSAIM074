#include <stdio.h>
#include <string.h>


int main() {
    char s[1000];
    printf("Enter a string: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s);
    if (n > 0 && s[n-1] == '\n') { s[n-1] = '\0'; n--; }

    char out[2000];
    int j = 0;
    for (int i = 0; i < n; ) {
        char c = s[i];
        int count = 0;
        while (i < n && s[i] == c) { count++; i++; }
        j += sprintf(out + j, "%c%d", c, count);
    }
    out[j] = '\0';

    
    printf("Compressed: %s\n", out);
    return 0;
}
