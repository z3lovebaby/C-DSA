#include<stdio.h>
int main(){
  int h,rh,oh,total;
  printf("Nhap vao so gio lam viec (>40)");
  scanf("%d",&h);
  printf("Cost of regular hour:");
  scanf("%d",&rh);
  printf("Cost of regular hour:");
  scanf("%d",&oh);
    total=rh*40+oh*(h-40);
    printf("Total: %d\n",total);
    return 0;
}
