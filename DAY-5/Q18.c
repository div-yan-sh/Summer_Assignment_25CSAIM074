#include<stdio.h>
int f(int n){int r=1;while(n){r*=n--; }return r;} int main(){int n,t,s=0;scanf("%d",&n);t=n;while(t){s+=f(t%10);t/=10;}printf(s==n?"Strong":"Not Strong");}