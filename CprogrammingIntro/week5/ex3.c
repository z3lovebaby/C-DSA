#include<stdio.h>
int main(){
  double c,f;
  printf("Nhap vao do C: ");
  scanf("%lf",&c);
  printf("Nhap vao do F: ");
  scanf("%lf",&f);
  printf("%.2f *C = %.2f *F\n",c,(9.0/5)*c+32);
  printf("%.2f *F = %.2f *C\n",f,(f-32)*5.0/9);



}
