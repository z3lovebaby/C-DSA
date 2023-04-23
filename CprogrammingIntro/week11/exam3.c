#include<stdio.h>
int main(){
  int a[7]={13,-355,235,47,67,943,1222};
  int i;
  for (i=0;i<5;i++){
    printf("Addres a[%d]:%p\n",i,&a[i]); 
  }
  return 0;
}
