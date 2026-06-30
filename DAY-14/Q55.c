#include<stdio.h>
int main(){int n,a[100],i,m=-999999,s=-999999;scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]>m){s=m;m=a[i];}else if(a[i]>s&&a[i]!=m)s=a[i];}printf("%d",s);}