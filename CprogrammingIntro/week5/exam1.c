#include<stdio.h>
int main(){
  int a,b,c,max;
  printf("Nhap vao 3 so: ");
  scanf("%d%*c%d%*c%d%*c",&a,&b,&c);
  max = a>b ? a:b;
  max = max <c ? c:max;
  printf("Max = %d\n",max);
  (a+b+c)>30 ? printf("Sum 2 first num %d\n",a+b):printf("Diff 2 last num %d\n",b-c);
  
  return 0;


}
