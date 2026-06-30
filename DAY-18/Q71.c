#include <stdio.h>

int main() {
    int n, a[100], i, x, low, high, mid, found = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == x) {
            printf("%d", mid);
            found = 1;
            break;
        } else if (a[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found)
        printf("-1");
    return 0;
}
