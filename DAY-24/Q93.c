#include <stdio.h>
#include <string.h>

// Q93: Check if s2 is a rotation of s1
int isRotation(const char *s1, const char *s2) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    if (n1 != n2) return 0;

    // Create a temporary string s1s1 = s1 + s1
    char *s1s1 = (char *)malloc(n1 * 2 + 1);
    if (!s1s1) return 0;
    strcpy(s1s1, s1);
    strcat(s1s1, s1);

    int found = (strstr(s1s1, s2) != NULL);
    free(s1s1);
    return found;
}

int main() {
    char s1[1000], s2[1000];
    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    if (s1[strlen(s1)-1] == '\n') s1[strlen(s1)-1] = '\0';

    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    if (s2[strlen(s2)-1] == '\n') s2[strlen(s2)-1] = '\0';

    if (isRotation(s1, s2))
        printf("%s is a rotation of %s\n", s2, s1);
    else
        printf("%s is NOT a rotation of %s\n", s2, s1);

    return 0;
}
