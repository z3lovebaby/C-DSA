#include<stdio.h>
int main(){
  double f,m;
  char name[26];
  printf("Ten cua ban: ");
  scanf(" %[^\n]",name);
  printf("Nhap vao lai suat theo nam: ");
  scanf("%lf",&f);
  printf("So tien gui: ");
  scanf("%lf",&m);
  printf("%-12s%-12s%-12s%-12s\n","Thang","Dau ki","Lai","Cuoi ki");
  int i;
  for (i=1;i<=12;i++)
    {
      printf("%-12d%-12.2lf%-12.2lf%-12.2lf\n",i,m,m*0.01*f/12,m*(1+0.01*f/12));
      m=m*(1+0.01*f/12);
    }
  return 0;
}
