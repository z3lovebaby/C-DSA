#include<stdio.h>

int main()
{
  int a,b,sum;
  sum=0;
  scanf("a=%d b=%d",&a,&b);
  for (int i=a;i<=b;i++){
    if (i % 3 ==0){
      sum+=i;}
  }
  printf("sum = %d",sum);
}
