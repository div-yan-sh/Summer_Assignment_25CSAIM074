#include<stdio.h>
int perf(int n){int i,s=1;for(i=2;i<=n/2;i++)if(n%i==0)s+=i;return s==n&&n>1;} int main(){int n;scanf("%d",&n);printf(perf(n)?"Perfect":"Not");}