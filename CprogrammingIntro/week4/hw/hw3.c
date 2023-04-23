#include<stdio.h>
#define c1 7.00
#define c2 5.00
#define c3 3.00
int main(){
  int dd,mm,yy,ovn,day3,w7;
  char s[]="***********";
  char v[]="-----------";
  printf(" WELCOME TO BK DVD SHOP \nPlease,\n");
  printf("Input the date (dd/mm/yyyy): ");
  scanf(" %d%*c%d%*c%d",&dd,&mm,&yy);
  printf("The number of overnight: ");
  scanf(" %d",&ovn);
  printf("The number of three-day: ");
  scanf(" %d",&day3);
  printf("The number of weekly: ");
  scanf(" %d",&w7);
  ////////// output
  printf("%s%s%s%s%s%s\n",s,s,s,s,s,s);
  printf("*%15s  *\t%-11s*\t%-10s*\t%s\t *\n","TYPE OF RENT","PRICE","NUMBER","SUM");
  printf("%-4c%-14s*\t%-11.2f*\t  %-8d*\t%6.2f\t *\n",'*',"Overnight",c1,ovn,ovn*c1);
  printf("%-4c%-14s*\t%-11.2f*\t  %-8d*\t%6.2f\t *\n",'*',"Three-day",c2,day3,day3*c2*3);
  printf("%-4c%-14s*\t%-11.2f*\t  %-8d*\t%6.2f\t *\n",'*',"Weekly",c3,w7,w7*c3*7);
  printf("%-6c%s%s%s%s%s%5c\n",'*',v,v,v,v,v,'*');
  printf("%-4c%-14s*\t\t\t\t  *\t%6.2f$\t *\n",'*',"TOTAL:",ovn*c1+day3*c2*3+w7*c3*7);
  printf("%-6c%s%s%s%s%s%5c\n",'*',v,v,v,v,v,'*');
  printf("%-4c%-14s*%30c%02d/%02d/%d\t *\n",'*',"DATE",' ',dd,mm,yy);
  printf("%s%s%s%s%s%s\n",s,s,s,s,s,s);
  return 0;
}
