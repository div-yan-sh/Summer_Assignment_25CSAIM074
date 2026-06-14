#include<stdio.h>
int main(){
  int n,c=0;
  scanf("%d",&n);
  while(n){
    c+=n&1;n>>=1;
  }
  printf("%d",c);
}
