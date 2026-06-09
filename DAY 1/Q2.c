//Print Multiplication Table of a Given Number

#include<stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=1;i<=10;i++) {
        printf("%dx%d=%d\n",num,i,num*i);
    }

    return 0;
}