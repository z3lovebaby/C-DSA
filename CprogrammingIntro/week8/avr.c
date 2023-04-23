#include<stdio.h>
int main(){
  int mark,sum,count;
  mark=sum=count=0;
  while(mark>=0){
    printf("Nhap vao diem cua thi sinh %d:",count+1);
    scanf("%d",&mark);
    sum+=mark;
    count++;
  }while (mark>=0);
    printf("Tong thi sinh da nhap: %d\nAvr = %.2f\n",count,sum*1.0/count);

  return 0;
}
