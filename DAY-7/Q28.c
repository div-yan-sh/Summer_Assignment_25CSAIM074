#include<stdio.h>
void r(int n){if(!n)return; printf("%d",n%10); r(n/10);} int main(){int n;scanf("%d",&n);r(n);}