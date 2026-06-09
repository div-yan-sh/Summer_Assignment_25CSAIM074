//Count Digits in a Number

#include<stdio.h>

int main() {
    int num,count=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num==0) {
        count=1;
    } else {
        while(num!=0) {
            count++;
            num/=10;
        }
    }

    printf("Number of digits=%d\n",count);

    return 0;
}