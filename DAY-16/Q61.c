#include <stdio.h>

int main() {
    int n, a[100], i, missing;
    scanf("%d", &n);
    int sum = 0, total = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    missing = total - sum;
    printf("%d", missing);
    return 0;
}
