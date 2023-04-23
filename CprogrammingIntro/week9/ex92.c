#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main(){
  int n,i;
  do{
  printf("Prime from 1 to n, n = ");
  scanf("%d",&n);
  if (n<0) printf("Error, Input again !!\n");}
  while (n<=0);
  if (is_prime(4)) printf("True\n");
  else printf("False\n");
  printf("\n");
  return 0;
}
int is_prime(int n){
  int i;
  for (i=2;i<=sqrt(n);i++){
    if (n%i==0) return 0;
  }
  printf("5\n");
  return 1;
}
