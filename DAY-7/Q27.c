#include<stdio.h>
int s(int n){
  return n?n%10+s(n/10):0;
} 
int main(){
  int n;
  scanf("%d",&n);
  printf("%d",s(n));
}
