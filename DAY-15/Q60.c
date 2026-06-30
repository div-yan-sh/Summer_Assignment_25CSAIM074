#include<stdio.h>
int main(){int n,a[100],i,j=0,b[100];scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++)if(a[i])b[j++]=a[i];while(j<n)b[j++]=0;for(i=0;i<n;i++)printf("%d ",b[i]);}