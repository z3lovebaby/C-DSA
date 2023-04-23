#include<stdio.h>
#include<math.h>
int main(){
  int i,n,dem;
  printf("%d\n",2);
  for (n=3;n<100;n++){
    dem=0;
    for (i=1;i<=sqrt(n);i++)
      {
	if (n % i ==0) dem=dem+1;
      }
    if (dem==1) printf("%d\n",n);
  }
  printf("\n");
  return 0;
}
