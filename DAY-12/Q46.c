#include <stdio.h>

int arm(int n) {
    int s = 0, t = n, r;
    while (t) {
        r = t % 10;
        s += r * r * r;
        t /= 10;
    }
    return s == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf(arm(n) ? "Armstrong" : "Not");
    return 0;
}
