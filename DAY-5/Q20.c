#include<stdio.h>
int main(){long long n,f=1,i;scanf("%lld",&n);for(i=2;i<=n;i++)while(n%i==0){f=i;n/=i;}printf("%lld",f);}