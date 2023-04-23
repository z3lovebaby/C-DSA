#include<stdio.h>
#define PI 3.142
int main(){
  double r,c,ac,as,v;
  r=5.678;
  printf("Radius = %f\n",r);
  c=2.0*PI*r;
  printf("C = %f\n",c);
  ac=PI*r*r;
  printf("S = %f\n",ac);
  as=4.0*PI*r*r;
  printf("Sxq = %f\n",as);
  v=4.0/3.0 *PI *r*r*r;
  printf("V = %f\n",v);
  return 0;

  
}
