#include<stdio.h>
int main(){
  char s[]="************";
  char b[]="___________";
  char VName[50],EName[50],stdname[24],prog[10],class[20];
  char c='|';
  int dd,mm,yy,prom,mssv,dd1,mm1,yy1;
    printf("Nhap vao ten truong cua ban (VietNamese): ");
  scanf(" %[^\n]",VName);
  printf("Nhap vao ten truong cua ban (English): ");
  scanf(" %[^\n]",EName);
  printf("Ho va ten cua ban: ");
  scanf(" %[^\n]",stdname);
  printf("Ma so sinh vien: ");
  scanf("%d",&mssv);
  printf("Ngay sinh cua ban (dd/mm/yy): ");
  scanf(" %d%*c%d%*c%d",&dd,&mm,&yy);
  printf("Ban la sinh vien khoa (66,65,64...): ");
  scanf(" %d",&prom);
  printf(" Chuyen nganh (IT-E7,IT1,IT2,..): ");
  scanf(" %[^\n]",prog);
  printf(" Lop sinh vien (Vd: ICT 2): ");
  scanf(" %[^\n]",class);
  printf("Gia tri su dung den (dd/mm/yy): ");
  scanf(" %d%*c%d%*c%d",&dd1,&mm1,&yy1);
  ////////////
  printf("%c%s%s%s%s%s%s%c\n",'*',s,s,s,s,s,s,'*');
  printf("%-73c%c\n",c,c);
  printf("%c%40s%24s%9c\n",c,VName,"THE SINH VIEN",c);
  printf("%c%46s%19s%8c\n",c,EName,"STUDENT ID CARD",c);
  printf("%-73c%c\n",c,c);
  printf("%-4c%s%s%s%s%s%s%4c\n",c,b,b,b,b,b,b,c);
  printf("%-4c%s%c %-61s%c\n",c,"Ho ten",'/',"Name",c);
  printf("%-4c%-24s%46c\n",c,stdname,c);
  printf("%-73c%c\n",c,c);
  printf("%-4c%s%c %-58s%c\n",c,"Ngay sinh",'/',"Date of Birth",c);
  printf("%-4c%02d/%02d/%d%60c\n",c,dd,mm,yy,c);
  printf("%-73c%c\n",c,c);
  printf("%-4c%s-K%d (%s) \n",c,class,prom,prog);
  printf("%-4c%c%c %c %c%c%c%c%c %c%c%c %c%c%c%c%c %c%c%c%c%c%c%c%c%41c\n",c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c);
  printf("%-4c%c%c %c %c%c%c%c%c %c%c%c %c%c%c%c%c %c%c%c%c%c%c%c%c%41c\n",c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c);
  printf("%-4c%s%c%s%36s%12c\n",c,"Gia tri den",'/',"Valid Thru","MSSV/ID no",c);
  printf("%-4c%02d/%02d/%d%47d%13c\n",c,dd1,mm1,yy1,mssv,c);
  printf("%c%s%s%s%s%s%s%c\n",'*',s,s,s,s,s,s,'*');
  return 0;
}
