#include<stdio.h>
int main(){
  char a,b,c,min;
  printf("Nhap vao ki tu a,b,c:\n");
  scanf("%c%c%c",&a,&b,&c);
  min=a;
  if (min>b){
    min=b;
  }
  if (min>c){
    min=c;
  }
  printf("Result: %c\n",min);
  return 0;


}
