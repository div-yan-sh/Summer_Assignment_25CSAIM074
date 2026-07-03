#include <stdio.h>

// Q104: Simple quiz application (3 questions)
int main() {
    int score = 0;
    int ans;

    printf("Q1: What is the capital of France?\n1) London  2) Berlin  3) Paris  4) Rome\nYour answer: ");
    if (scanf("%d", &ans) == 1 && ans == 3) score++;

    printf("Q2: 2 + 2 = ?\n1) 3  2) 4  3) 5  4) 22\nYour answer: ");
    if (scanf("%d", &ans) == 1 && ans == 2) score++;

    printf("Q3: Which language is this program written in?\n1) Python  2) Java  3) C  4) Ruby\nYour answer: ");
    if (scanf("%d", &ans) == 1 && ans == 3) score++;

    printf("Your score: %d/3\n", score);
    return 0;
}
