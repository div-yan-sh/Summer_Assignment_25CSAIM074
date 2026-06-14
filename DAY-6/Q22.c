#include<stdio.h>
#include<string.h>
int main(){char b[65];int i,v=0;scanf("%s",b);for(i=0;b[i];i++)v=v*2+b[i]-48;printf("%d",v);}