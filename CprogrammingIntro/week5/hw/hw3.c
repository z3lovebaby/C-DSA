#include<stdio.h>
#define tulanh 8
#define tv 15
#define lap 12
int main(){
  int n1,n2,n3,DTtulanh,DTtv,DTlap;
  printf("Nhap vao so luong tu lanh Electrolux da ban: \n", );
  scanf("%d",&n1);
  printf("Nhap vao so luong TV LCD Sony da ban: \n", );
  scanf("%d",&n2);
  printf("Nhap vao so luong Laptop HP da ban: \n", );
  scanf("%d",&n3);
  DTtulanh=n1*tulanh;
  DTtv=n2*tv;
  DTlap=n3*lap;
  char str[]="**********";
  char etr[]="__________";
  printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  printf("%-17c%s%18c\n",'*',"VIETLONG - THONG KE SAN PHAM",'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  printf("%-7c%-19s%-5c%-9s%-4c%-9s%-8c%-10s%c\n",'*',"TEN SAN PHAM",'*',"PRICE",'*',"NUMBER",'*',"SUM",'*');
  printf("%-7c%-19s%-5c%-9d%-4c%-9d%-8c%-10d%c\n",'*',"Tu lanh Electrolux",'*',tulanh,'*',n1'*',DTtulanh,'*');
  printf("%-7c%-19s%-5c%-9d%-4c%-9d%-8c%-10d%c\n",'*',"TV LCD Sony",'*',tv,'*',n2,'*',DTtv,'*');
  printf("%-7c%-19s%-5c%-9d%-4c%-9d%-8c%-10d%c\n",'*',"Laptop HP",'*',lap,'*',n3,'*',DTlap,'*');
  printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  return 0;
}
#include<stdio.h>
#define tulanh 8
#define tv 15
#define lap 12
int main(){
  	int n1,n2,n3,DTtulanh,DTtv,DTlap;
	printf("Nhap vao so luong tu lanh Electrolux da ban: \n", );  
	scanf("%d",&n1);
	printf("Nhap vao so luong TV LCD Sony da ban: \n", );  
	scanf("%d",&n2);
	printf("Nhap vao so luong Laptop HP da ban: \n", );  
	scanf("%d",&n3);
	DTtulanh=n1*tulanh;
	DTtv=n2*tv;
	DTlap=n3*lap;
	char str[]="**********";
  	char etr[]="__________";
  	printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  	printf("%-17c%s%18c\n",'*',"VIETLONG - THONG KE SAN PHAM",'*');
  	printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  	printf("%-7c%-19s%-5c%-9s%-4c%-9s%-8c%-10s%c\n",'*',"TEN SAN PHAM",'*',"PRICE",'*',"NUMBER",'*',"SUM",'*');
  	printf("%-7c%-19s%-5c%-9d%-4c%-9d%-8c%-10d%c\n",'*',"Tu lanh Electrolux",'*',tulanh,'*',n1'*',DTtulanh,'*');
  	printf("%-7c%-19s%-5c%-9d%-4c%-9d%-8c%-10d%c\n",'*',"TV LCD Sony",'*',tv,'*',n2,'*',DTtv,'*');
  	printf("%-7c%-19s%-5c%-9d%-4c%-9d%-8c%-10d%c\n",'*',"Laptop HP",'*',lap,'*',n3,'*',DTlap,'*');
  	printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
  return 0;
}
