#include<stdio.h>
int main(){
  int a[3]={1,3,5},*p,*q;
  p=a;
  q=p+2;

  ///
  printf("a is %p\np is %p\nq is %p\n",a,p,q);
  printf("p point to %d and q point to %d\n",*p,*q);
  printf("The pointer distance between p and q is %ld\n",q-p);
  printf("The integer distance between p and q is %d\n",(int)q-(int)p);
  return 0;
}
