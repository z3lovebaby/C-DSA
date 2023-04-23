#include<stdio.h>
int main(){
  float a,b;
  printf("Nhap vao 2 so thuc a,b: ");
  scanf("%f %f",&a,&b);
  printf("2  so da nhap la %.3f %.3f\n",a,b);
  printf("(%.2f+%.2f)^3 / (%.2f ^2 - %.2f ^2)-%.2f*%.2f = %.2f\n",a,b,a,b,a,b,(a+b)*(a+b)*(a+b)/(a*a-b*b)-a*b);

  return 0;
}
