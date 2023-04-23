#include<stdio.h>
#define maxSize 5
void getSale(int* a){
  int i=0;
  for (i=0;i<maxSize;i++){
    printf("Enter sale figure for quater %d = ",i+1);
    scanf("%d",a+i);
  }
}
///
int totalSale(int *a){
  int i=0,sum=0;
  for (i=0;i<maxSize;i++){
    sum+=*(a+i);
  }
  return sum;
}
int main(){
  int a[maxSize];
  getSale(a);
  printf("Totalsales: %d\n",totalSale(a));
  return 0;
}
