#include <stdio.h>

int main() {
    int low, high, i, isPrime;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    
    printf("Prime numbers between %d and %d are: ", low, high);
    
    while (low < high) {
        isPrime = 1;
        
        if (low <= 1) {
            ++low;
            continue;
        }
        
        for (i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1) {
            printf("%d ", low);
        }
        ++low;
    }
    printf("\n");
    return 0;
}