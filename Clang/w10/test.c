#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxSize 10
int max(int a, int b){
  if (a>b)return a;else
    return b;
}
int min(int a,int b){
  if (a>b) return b;
  else return a;
}
int main(){
  int a[maxSize];
  int i,n,sum,maxa,mina;
  sum=0;
  do{
  printf("Nhap vao so phan tu cua mang(<%d): ",maxSize);
  scanf("%d",&n);
  }while (n>maxSize);
  srand((int)time(0));
  for (i=0;i<n;i++){
    a[i] = rand()%10+1;}
  for (i=0;i<n;i++){
    printf("%d ",a[i]);
    sum+=a[i];
  }
  maxa=mina=a[0];
  for (i=1;i<n;i++){
    mina=min(mina,a[i]);
    maxa=max(maxa,a[i]);
  }
  printf("\nMax: %d\nMin: %d\nSum: %d\n",maxa,mina,sum);
  return 0;
}
