#include<stdio.h>
#include<math.h>
int main(){
  int n=1;
  double y,pi,er;
  y=1;
  pi=0;
  printf("Nhap vao sai so: ");
  scanf("%lf",&er);
  while (fabs(pi-4*y)>er){
    pi=4*y;
    if (n % 2 ==0)
      {
	y=y+1.0/(2*n+1);
      }else
      {
	y=y-1.0/(2*n+1);
      }
    n=n+1;
  }
  printf("PI= %.6f\n",4*y);
  return 0;

}
