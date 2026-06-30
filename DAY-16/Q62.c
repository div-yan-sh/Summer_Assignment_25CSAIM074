#include <stdio.h>

int main() {
    int n, a[100], i, j, maxfreq = 0, maxelem = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }
        if (count > maxfreq) {
            maxfreq = count;
            maxelem = a[i];
        }
    }
    printf("%d", maxelem);
    return 0;
}
