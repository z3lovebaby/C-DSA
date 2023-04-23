#include<stdio.h>
#define Prog "HESPI"
#define Prom 53
int main(){
  char name[24],status[20];
  int dd,mm,yy;
  printf(" Input Student Name: ");
  scanf(" %[^\n]", name);
  printf(" Input Status (Absent/Late): ");
  scanf(" %s",status);
  printf("Input day,month,year (dd/mm/yy): ");
  scanf(" %d%*c%d%*c%d",&dd,&mm,&yy);
  ///////Output theo form///
  char s[]="********************";
  printf("%s\n",name);
  printf("*\t*\t*\n");
  printf("\t%s%s%s\n",s,s,s);   // 3s=60
  printf("\t*%18s\t*\t %-20s%7c\n","Student Name:",name,'*');
  printf("\t*%18s\t*\t %-20s%7c\n","Program:",Prog,'*');
  printf("\t*%18s\t*\t %-20d%7c\n","Promotion:",Prom,'*');
  printf("\t*%18s\t*\t %-20s%7c\n","Status:",status,'*');
  printf("\t*%18s\t*\t %02d/%02d/%d\t\t%4c\n","At:",dd,mm,yy,'*');
  printf("\t%s%s%s\n",s,s,s);
  return 0;
  




}
