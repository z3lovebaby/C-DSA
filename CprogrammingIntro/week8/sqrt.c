#include<stdio.h>
#include<math.h>
int main(){
  double n,x,xi;
  int count=0;
  do{
    printf("Nhap vao so duong n: ");
    scanf("%lf",&n);
  }while (n<=0);
  xi=n;
  do {
    x=xi;
    xi=0.5*(x+n/x);
    count++;
  }while (fabs(xi-x)>0.000001);
  printf("%lf\nSau %d lan\n",xi,count);
  return 0;
}
