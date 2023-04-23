#include<stdio.h>
int main(){
  int a,b,c;
  /* printf("The first number: ");
  scanf("%d",&a);
  printf("The second number: ");
  scanf("%d",&b);
  c=a+b;
  printf("%d + %d = %d\n",a,b,c);
  return 0;
  */
  int d,m,y,x;
  char ch1,ch2;
  float f;
  printf("Nhap vao ch1 ch2\n");
  scanf("%c%c",&ch1,&ch2);
  printf("Nhap vao so nguyen:");
  scanf("%d",&x);
  printf("Nhap vao thu ngay thang:");
  scanf("%2d%2d%4d",&d,&m,&y);
  printf("Nhap vao thu ngay thang v2: ");
  scanf("%d/%d/%d",&d,&m,&y);
  printf("nhap vao so thuc:");
  scanf("%f",&f);
  printf("Ki tu 1: %c \t ki tu 2: %c\n",ch1,ch2);
  printf("Hom nay la: %d/%d/%d\n",d,m,y);
  printf("So thu da nhap: %f\n",f);
    return 0;
}
