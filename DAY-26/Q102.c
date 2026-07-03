#include <stdio.h>

// Q102: Voting eligibility
int main() {
    int age;
    printf("Enter age: ");
    if (scanf("%d", &age) != 1) 
        return 0;
    if (age >= 18) 
        printf("Eligible to vote\n");
    else 
        printf("Not eligible to vote\n");
    return 0;
}
