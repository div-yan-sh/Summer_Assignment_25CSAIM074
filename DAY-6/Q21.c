#include<stdio.h>
int main(){int n,a[32],i=0;scanf("%d",&n);do{a[i++]=n%2;n/=2;}while(n);while(i--)printf("%d",a[i]);}