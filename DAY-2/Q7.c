#include <stdio.h>

int main() {
    int n, prod = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Handle the case where the user inputs 0 directly
    if (n == 0) {
        prod = 0;
    }
    
    while(n != 0) {
        rem = n % 10;
        prod *= rem;
        n /= 10;
    }
    
    printf("Product of digits: %d\n", prod);
    return 0;
}