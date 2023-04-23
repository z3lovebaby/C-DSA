#include<stdio.h>
int main(){
  int a;
  float b;
  printf("Nhap vao so nguyen:");
  scanf("%d",&a);
  printf("Nhap vao so thuc:");
  scanf("%f",&b);
  printf("So nguyen da nhap: %d\t So thuc %.2f\n",a,b);
  printf("Input in Oct: %o\n Input in hex: %x\n",a,a);
  return 0;


}
