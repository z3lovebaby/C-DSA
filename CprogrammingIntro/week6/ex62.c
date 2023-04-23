#include<stdio.h>
int main(){
  int mark;
  printf("Nhap vao diem: \n");
  scanf("%d",&mark);
  if (mark>=90) {printf("\tA\n");}
  else if(mark>=80) {
    printf("\tB\n");
  }else if(mark>=70){
    printf("\tC\n");

  }else if (mark>=60){
    printf("\tD\n");
  }else
    printf("\tF\n");

  return 0;
}
