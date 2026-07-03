#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Q100: Sort words by length
int cmpword(const void *a, const void *b) {
    const char *wa = *(const char **)a;
    const char *wb = *(const char **)b;
    int la = strlen(wa), lb = strlen(wb);
    if (la != lb) return la - lb;
    return strcmp(wa, wb);
}

int main() {
    char line[2000];
    printf("Enter a sentence: ");
    if (!fgets(line, sizeof(line), stdin)) return 0;
    int n = strlen(line); if (n>0 && line[n-1]=='\n') line[n-1] = '\0';

    // Split into words
    char *words[1000];
    int wc = 0;
    char *tok = strtok(line, " \t");
    while (tok && wc < 1000) {
        words[wc++] = strdup(tok);
        tok = strtok(NULL, " \t");
    }

    qsort(words, wc, sizeof(char*), cmpword);
    printf("Words sorted by length:\n");
    for (int i = 0; i < wc; ++i) {
        printf("%s\n", words[i]);
        free(words[i]);
    }
    return 0;
}
