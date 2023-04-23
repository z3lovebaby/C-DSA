#include<stdio.h>
int main(){
  int i,x;
  /*for (i=1;i<=10;i++){
    printf("\t%d\t %d\n",i,i*i);
  }*/
  for (i=1;i<100;i++){
    x+=i;
    if (x%i==0) i--;

  }
  printf("%d\n",x);
  return 0;
}
