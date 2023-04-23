#include<stdio.h>
double hospitalFee(char fname[26],char adr[30],int age,int numDay,char bhyt,double thuoc,double pt);
int main(){
    int ch;
    char fname[26],adr[30];
    char bhyt,ch2;
    int age,dd,mm,yy,num,g,s,c,countP;
    double thuoc,pthuat,sum,maxReduce,thanhtoan;
    g=s=c=countP=0;
    sum=0;
    maxReduce=0;
    printf("\t\t\tCHUONG TRINH VIEN PHI\n");
    do{
        printf("____________________________________\n");
        printf("____________________________________\n");
        printf("1. Thong tin benh nhan\n(bao gom: Ho ten,loai the, thong tin kham chua..)\n");
        printf("2. Hoa don thanh toan vien phi (BN hien tai)\n");
        printf("3. Bao cao thong ke\n");
        printf("4. Thoat\n");
        printf("Nhap vao lua chon voi so tuong ung(1 or 2 ...): ");
        scanf("%d",&ch);
        ///
        switch(ch){
            case 1:
            printf("Ngay nhap vien (Form: dd/mm/yy): ");
            scanf("%d%*c%d%*c%d",&dd,&mm,&yy);
            printf("Nhap vao ten cua benh nhan: ");
            scanf(" %[^\n]",fname);
            printf("Tuoi cua benh nhan: ");
            scanf("%d",&age);
            printf("Dia chi: ");
            scanf(" %[^\n]",adr);
            do{
                printf("So ngay nam noi tru (150.000/ngay):");
                scanf("%d",&num);
            if (num<0) printf("So ngay nam vien >=0, hay nhap lai!\n");
            }while (num<0);
            do{
                printf("Tien thuoc: ");
                scanf("%lf",&thuoc);
                if (thuoc<0) printf("Chi phi phai la so duong. Nhap lai !\n");
            }while(thuoc<0);
            pthuat=0;
            printf("Ban co phau thuat khong? Co (Y), Khong (N): ");
            scanf(" %c%*c",&ch2);
            if (ch2=='Y'){
                printf("Nhap vao chi phi phau thuat: ");
                scanf("%lf%*c",&pthuat);
            }
            do{ 
                printf("The bao hiem ban co Gold(G),Siliver(S),Citizen(C),No(N): ");
                scanf(" %c%*c",&bhyt);
            }while(bhyt!='G'&&bhyt!='S'&&bhyt!='C'&&bhyt!='N');
            if (bhyt=='G')
                g++;
                else if (bhyt=='S')
                s++;
                else if (bhyt=='C')
                c++;
                countP++;
            printf("Thong tin hoan tat !\n");
            break;
            case 2:
            thanhtoan=hospitalFee(fname,adr,age,num,bhyt,thuoc,pthuat);
            printf("Chi phi thanh toan %2.lf\n",thanhtoan);
            
            if ((150000*num+thuoc+pthuat)-thanhtoan>maxReduce){
                maxReduce=(150000*num+thuoc+pthuat)-thanhtoan;
            }
            sum=sum+thanhtoan;
            break;
            case 3:
            printf("\t\t\tThong ke\n");
            printf("Tong so benh nhan: %d\n",countP);
            printf("Trung binh moi benh nhan phai tra: %.2lf VND\n",sum/countP);
            printf("So tien toi da mot nguoi duoc giam:%.2lf VND\n",maxReduce);
            printf("Loai BH: Gold %d\t\tSiliver %d\tCitizen %d\tKhong BH %d\n\n",g,s,c,countP-g-s-c);
        }
    }while (ch!=4);
    return 0;
}
double hospitalFee(char fname[26],char adr[30],int age,int numDay,char bhyt,double thuoc,double pt){
    char str[]="**********";
    char etr[]="__________";
    double a;
  if (bhyt=='G') a=0.3;
  else if (bhyt=='S') a=0.5;
  else if (bhyt=='C') a=0.7;
  else
    {
      a=1;
    }
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
      printf("%-7c%-19s%-6c%-5c%-3c%-6c%-7c%-4c%-10.0lf%-4s%c\n",'*',"Thuoc",'*',' ',' ','*',' ','*',thuoc,"VND",'*');
      printf("%-7c%-19s%-6c%-5c%-3c%-6c%-7c%-4c%-10.0lf%-4s%c\n",'*',"Phau thuat",'*',' ',' ','*',' ','*',pt,"VND",'*');
      printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
      printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
      printf("%-28c%-25s%-4c%-10.0lf%-4s%c\n",'*',"TONG",' ',150000*numDay+thuoc+pt,"VND",'*');
      printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
      printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
      printf("%-7c%-19s%-4c%-12c%30c\n",'*',"LOAI BHYT",'*',bhyt,'*');
      printf("%-7c%-19s%-4c%-12.2f%6s%24c\n",'*',"DISCOUNT FROM BHYT",'*',(1-a)*(150000*numDay+thuoc+pt),"VND",'*');
      printf("%-7c%-13s%12.1lf - %12.1lf = %12.1lf %-3s%6c\n",'*',"THANH TOAN:",150000*numDay+thuoc+pt*1.0,(1-a)*(150000*numDay+thuoc+pt),a*(150000*numDay+thuoc+pt),"VND",'*');
      printf("*%s%s%s%s%s%s%s*\n",etr,etr,etr,etr,etr,etr,etr);
      printf("*%s%s%s%s%s%s%s*\n",str,str,str,str,str,str,str);
  return a*(150000*numDay+thuoc+pt);
}