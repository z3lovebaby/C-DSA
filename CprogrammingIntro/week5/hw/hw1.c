#include <stdio.h>
#define io 148
#define ia 288
int main(){
  int numIpod,numIpad,total;
  float pay;
  printf("WELCOME TOPCARE SUPERMARKET\n");
  printf("Ban muon mua bao nhieu IPOD: ");
  scanf("%d",&numIpod);
  printf("Ban muon mua bao nhieu IPAD: ");
  scanf("%d",&numIpad);
  total=io*numIpod+ia*numIpad;
  ////bill
  char str[]="**********";
  char etr[]="__________";
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  printf("%-17c%s%18c\n",'*',"SIEU THI TOPCARE - HOA DON THANH TOAN",'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("%-7c%-19s%-5c%-9s%-4c%-9s%-8c%-10s%c\n",'*',"TEN SAN PHAM",'*',"PRICE",'*',"NUMBER",'*',"SUM",'*');
  printf("%-7c%-19s%-6c%-5d%-3c%-6c%-7d%-8c%-7d%-3c%c\n",'*',"IPOD",'*',io,'$','*',numIpod,'*',io*numIpod,'$','*');
  printf("%-7c%-19s%-6c%-5d%-3c%-6c%-7d%-8c%-7d%-3c%c\n",'*',"IPAD",'*',ia,'$','*',numIpad,'*',ia*numIpad,'$','*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  printf("%-28c%-25s%-8c%-7d%-3c%c\n",'*',"TONG",' ',ia*numIpad+io*numIpod,'$','*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  (numIpod>=3 && numIpad>=2)||(total>=1020) ? printf("%-7c%-19s%-5c%6d x 10%% = %7.2f%2c%17c\n",'*',"DISCOUNT",'*',total,total*0.1,'$','*'):printf("%-7c%-19s%-5c%-40d%c\n",'*',"DISCOUNT",'*',0,'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  printf("%-7c%-19s%-8c%-9.2f%2c%27c\n",'*',"THANH TOAN",'*',(numIpod>=3 && numIpad>=2)||(total>=1020)?total*0.9:total,'$','*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  return 0;
}
