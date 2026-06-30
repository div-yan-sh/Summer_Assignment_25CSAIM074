#include <stdio.h>

int main() {
    int n, a[100], i, mn, mx;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    mn = mx = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < mn)
            mn = a[i];
        if (a[i] > mx)
            mx = a[i];
    }
    printf("%d %d", mx, mn);
    return 0;
}
