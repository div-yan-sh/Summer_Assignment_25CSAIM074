#include<stdio.h>
long long f(int n){
  return n<2?1:n*f(n-1);
} 
int main(){
  int n;
  scanf("%d",&n);
  printf("%lld",f(n));
}
