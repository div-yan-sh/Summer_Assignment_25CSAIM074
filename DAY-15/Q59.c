#include <stdio.h>

int main() {
    int n, a[100], l, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    l = a[n - 1];
    for (i = n - 1; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = l;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
