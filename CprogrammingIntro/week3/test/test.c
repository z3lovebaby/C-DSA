#include<stdio.h>
int main(){
  /* printf("%12s\n","Menu");
  printf("%s%8s%10s\n","Code","Name","Price");
  printf("%4d%7s%14.2f\n",1,"Aaa",45000.0);
  printf("%4d%7s%14.2f\n",2,"Bbb",12500.0);
  */
  int hh,mm,ss,hh1,mm1,ss1;
  printf("Nhap vao time1 (hh:mm:ss): ");
  scanf(" %d%*c%d%*c%d",&hh,&mm,&ss);
  printf("Nhap vao time2 (hh:mm:ss): ");
  scanf(" %d%*c%d*c%d",&hh1,&mm1,&ss1);
  printf("Kq: %d\n",(hh-hh1)*3600+(mm-mm1)*60+ss-ss1);
  return 0;

}
