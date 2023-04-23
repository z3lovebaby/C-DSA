#include<stdio.h>
#define maxSize 6
void getArr(int* a){
  int i=0;
  for (i=0;i<maxSize;i++){
    printf("a[%d] = ",i);
    scanf("%d",a+i);
  }
}
void Rotate(int *a){
  int temp,i;
  for (i=0;i<maxSize/2;i++){
    temp=*(a+maxSize-1-i);
    *(a+maxSize-1-i)=*(a+i);
    *(a+i)=temp;
  }
}
//
int outArr(int *a){
  int i;
  for (i=0;i<maxSize;i++){
    printf("%d ",*(a+i));
  }
  printf("\n");
}

int main(){
  int a[maxSize];
  getArr(a);
  outArr(a);
  Rotate(a);
  outArr(a);
  return 0;
}
