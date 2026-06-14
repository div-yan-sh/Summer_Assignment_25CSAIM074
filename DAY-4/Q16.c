#include<stdio.h>
int main(){
  int a,b,n,t,s,r;
  scanf("%d%d",&a,&b);
  for(n=a;n<=b;n++){
    t=n;
    s=0;
    while{r=t%10;s+=r*r*r;t/=10;}
    if(s==n)
      printf("%d ",n);
  }
}
