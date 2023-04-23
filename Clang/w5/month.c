#include<stdio.h>
int main(){
  int month;
  printf("Nhap vao thang (number): ");
  scanf("%d",&month);
  if (month == 1 || month ==3 ||month ==5 ||month==7||month==8||month==10||month==12)
    {
      printf("Thang %d co 31 ngay.\n",month);
    }else if (month==2)
    {
      printf("Thang 2 co 28 hoac 29 ngay.\n");
    }else
    {
      printf("Thang %d co 30 ngay.\n",month);
    }
  return 0;
}
