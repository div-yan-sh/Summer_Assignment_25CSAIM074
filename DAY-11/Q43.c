#include<stdio.h>
int prime(int n){
  int i;
  if(n<2)return 0;
  for(i=2;i*i<=n;i++)
    if(n%i==0)return 0;
  return 1;
} 
int main(){
  int n;
  scanf("%d",&n);
  printf(prime(n)?"Prime":"Not Prime");
}
