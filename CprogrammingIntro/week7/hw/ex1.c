#include<stdio.h>
int main(){
  char fname[26],adr[32];
  char bhyt,check2,check;
  int age,numDay,countP,g,s,c;
  double a=-1,sumFee=0,maxReduce=0;
  long int thuoc,pt;
  countP=g=s=c=0;
  printf("De nhap du lieu, nhan phim bat ki.\nDung nhap nhan Ctrl D: ");
  while (scanf("%c",&check)!=EOF){
    printf("Nhap vao ten cua benh nhan: ");
    scanf(" %[^\n]",fname);
    printf("Tuoi cua benh nhan: ");
    scanf("%d",&age);
    printf("Dia chi: ");
    scanf(" %[^\n]",adr);
    printf("So ngay nam vien (150k/day): ");
    scanf("%d",&numDay);
    printf("Nhap vao tong tien thuoc: ");
    scanf("%ld",&thuoc);
    printf("Nhap vao tien phau thuat: ");
    scanf("%ld",&pt);
    double a=-1;
    while (a<0){
      printf("The bao hiem ban co Gold(G),Siliver(S),Citizen(C), No(N): ");
      scanf(" %c",&bhyt);
      if (bhyt=='G')
	{
	  a=0.3;
	  g++;
	}
      else if (bhyt=='S') {
	a=0.5;
	s++;
      }
      else if (bhyt=='C') {
	a=0.7;
	c++;
      }
      else if (bhyt=='N') a=0;
      else
	{
	  printf("Nhap sai. Hay nhap laiii !\n");
	  a=-1;
	}
    }
    countP++;
    sumFee+=a*(150000*numDay+thuoc+pt);
    if ((1-a)*(150000*numDay+thuoc+pt)>maxReduce) maxReduce=(1-a)*(150000*numDay+thuoc+pt);
    printf("Co muon in hoa don khong. Yes(Y) or No(N): ");
    scanf(" %c%*c",&check2);
    if (check2=='Y') {
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
      printf("%-7c%-19s%-4c%-12c%30c\n",'*',"LOAI BHYT",'*',bhyt,'*');
      printf("%-7c%-19s%-4c%-12.2f%6s%24c\n",'*',"DISCOUNT FROM BHYT",'*',(1-a)*(150000*numDay+thuoc+pt),"VND",'*');
      printf("%-7c%-13s%12.1lf - %12.1lf = %12.1lf %-3s%6c\n",'*',"THANH TOAN:",150000*numDay+thuoc+pt*1.0,(1-a)*(150000*numDay+thuoc+pt),a*(150000*numDay+thuoc+pt),"VND",'*');
      printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
      printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
    }else printf("Khong in ra hoa don !\n");
    printf("De nhap du lieu, nhan phim bat ki.\nDung nhap nhan Ctrl D: ");
  }
  printf("\n\n\nReport:\n");
  printf("Tong so benh nhan: %d\n",countP);
  printf("So BHYT Gold:%d\nSo BHYT Siliver:%d\nSo BHYT Citizen:%d\n",g,s,c);
  printf("Average fee that patient have to pay: %.2f\n",sumFee*1.0/countP);
  printf("The most profit from assurance: %.2f\n",maxReduce);
  return 0;
}
