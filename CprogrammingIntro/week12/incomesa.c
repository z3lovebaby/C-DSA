#include<stdio.h>
int incomeplus (int *slr,int *a){
  printf("Nhap vao luong hien tai: ");
  scanf("%d",slr);
  printf("Lan tang luong cuoi casch n nam, n=: ");
  scanf("%d",a);
  printf("Luong cu:%d\n",*slr);
  if (*a>3) *slr+=30000*(*a/3);
  return 0;
}
int main(){
  int slr,a;
  incomeplus(&slr,&a);
  printf("Luong hien tai: %d\n",slr);
  return 0;
}
