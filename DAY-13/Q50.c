#include<stdio.h>
int main(){int n,a[100],i,s=0;scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&a[i]);s+=a[i];}printf("Sum=%d Avg=%.2f",s,(float)s/n);}