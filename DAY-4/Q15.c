#include<stdio.h>
int main(){int n,t,s=0,r;scanf("%d",&n);t=n;while(t){r=t%10;s+=r*r*r;t/=10;}printf(s==n?"Armstrong":"Not Armstrong");}