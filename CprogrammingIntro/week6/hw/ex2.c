#include<stdio.h>
int main(){
  char fname[26],adr[32];
  char bhyt;
  int age,numDay;
  double a;
  long int thuoc,pt;
  printf("Nhap vao ten cua benh nhan: ");
  scanf("%[^\n]",fname);
  printf("Tuoi cua benh nhan: ");
  scanf("%d",&age);
  printf("Dia chi: ");
  scanf(" %[^\n]",adr);
  printf("So ngay nam vien (15k/day): ");
  scanf("%d",&numDay);
  printf("Nhap vao tong tien thuoc: ");
  scanf("%ld",&thuoc);
  printf("Nhap vao tien phau thuat: ");
  scanf("%ld",&pt);
  printf("The bao hiem ban co Gold(G),Siliver(S),Citizen(C): ");
  scanf(" %c",&bhyt);
  if (bhyt=='G') a=0.3;
  else if (bhyt=='S') a=0.5;
  else if (bhyt=='C') a=0.7;
  else
    {
      printf("Nhap laiii !\n");
      return 0;
    }
  char str[]="**********";
  char etr[]="__________";
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  printf("%-22c%s%23c\n",'*',"HOA DON THANH TOAN VIEN PHI",'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%71c\n",'*');
  printf("%-3c%-10s%-26s%32c\n",'*',"Benh nhan: ",fname,'*');
  printf("%-3c%-10s%-26d%33c\n",'*',"Tuoi: ",age,'*');
  printf("%-3c%-10s%-40s%19c\n",'*',"Adr: ",adr,'*');
  printf("%-3c%-10s%-26c%33c\n",'*',"BHYT: ",bhyt,'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("%-7c%-19s%-5c%-9s%-4c%-9s%-8c%-10s%c\n",'*',"TEN DICH VU",'*',"PRICE",'*',"NUMBER",'*',"SUM",'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("%-7c%-19s%-3c%-7d%-4s%-6c%-7d%-4c%-10d%-4s%c\n",'*',"PHI NOI TRU",'*',150000,"VND",'*',numDay,'*',150000*numDay,"VND",'*');
  printf("%-7c%-19s%-6c%-5c%-3c%-6c%-7c%-4c%-10ld%-4s%c\n",'*',"Thuoc",'*',' ',' ','*',' ','*',thuoc,"VND",'*');
  printf("%-7c%-19s%-6c%-5c%-3c%-6c%-7c%-4c%-10ld%-4s%c\n",'*',"Phau thuat",'*',' ',' ','*',' ','*',pt,"VND",'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  printf("%-28c%-25s%-4c%-10ld%-4s%c\n",'*',"TONG",' ',150000*numDay+thuoc+pt,"VND",'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  printf("%-7c%-19s%-4c%-12.2f%6s%24c\n",'*',"DISCOUNT FROM BHYT",'*',(1-a)*(150000*numDay+thuoc+pt),"VND",'*');
  printf("%-7c%-13s%12.1lf - %12.1lf = %12.1lf %-3s%6c\n",'*',"THANH TOAN:",150000*numDay+thuoc+pt*1.0,(1-a)*(150000*numDay+thuoc+pt),a*(150000*numDay+thuoc+pt),"VND",'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  return 0;
}
