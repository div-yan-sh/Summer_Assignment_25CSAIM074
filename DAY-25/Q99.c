#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Q99: Sort names alphabetically
int cmpstr(const void *a, const void *b) {
    const char * const *pa = a;
    const char * const *pb = b;
    return strcmp(*pa, *pb);
}

int main() {
    int n;
    printf("How many names? ");
    if (scanf("%d", &n) != 1) return 0;
    getchar(); // consume newline

    char **names = malloc(n * sizeof(char*));
    for (int i = 0; i < n; ++i) {
        char buf[1000];
        printf("Enter name %d: ", i+1);
        if (!fgets(buf, sizeof(buf), stdin)) buf[0] = '\0';
        int L = strlen(buf); if (L>0 && buf[L-1]=='\n') buf[L-1]='\0';
        names[i] = strdup(buf);
    }

    qsort(names, n, sizeof(char*), cmpstr);
    printf("Names sorted alphabetically:\n");
    for (int i = 0; i < n; ++i) {
        printf("%s\n", names[i]);
        free(names[i]);
    }
    free(names);
    return 0;
}
