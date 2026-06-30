#include <stdio.h>

int main() {
    int n, a[100], i, j, sum, found = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &sum);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == sum) {
                printf("%d %d", a[i], a[j]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }
    if (!found)
        printf("No pair found");
    return 0;
}
