#include <stdio.h>

int pal(int n) {
    int r = 0, t = n;
    while (t) {
        r = r * 10 + t % 10;
        t /= 10;
    }
    return r == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf(pal(n) ? "Palindrome" : "Not");
    return 0;
}
