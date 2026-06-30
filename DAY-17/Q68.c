#include <stdio.h>

int main() {
    int n1, n2, a[100], b[100], i, j, found, printed[100];
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n1; i++) {
        found = 0;
        int alreadyPrinted = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (alreadyPrinted)
            continue;
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if (found)
            printf("%d ", a[i]);
    }
    return 0;
}
