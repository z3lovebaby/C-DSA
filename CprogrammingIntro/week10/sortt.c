#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxSize 10
void Dsort(int a[]){
  int tmp,i,j;
  for (i=0;i<maxSize-1;i++){
    for (j=i+1;j<maxSize;j++){
      if (a[i]<a[j]){
	tmp=a[j];
	a[j]=a[i];
	a[i]=tmp;
      }
    }
  }
  for (i=0;i<maxSize;i++){
    printf("%5d",a[i]);
  }
}
void Asort(int a[]){
  int tmp,i,j;
  for (i=0;i<maxSize-1;i++){
    for (j=i+1;j<maxSize;j++){
      if (a[i]>a[j]){
	tmp=a[j];
	a[j]=a[i];
	a[i]=tmp;
      }
    }
  }
  for (i=0;i<maxSize;i++){
    printf("%5d",a[i]);
  }
}
void Dsortodd(int a[]){
  int tmp,i,j;
  for (i=0;i<maxSize-1;i++){
    for (j=i+1;j<maxSize;j++){
      if (a[i]<a[j]&&(a[i]%2)&&(a[j]%2)){
	tmp=a[j];
	a[j]=a[i];
	a[i]=tmp;
      }
    }
  }
  for (i=0;i<maxSize;i++){
    printf("%5d",a[i]);
  }
}
int main(){
  int a[maxSize];
  int i;
  srand((int)time(0));
  for (i=0;i<maxSize;i++){
    a[i] = rand()%10+1;
  }
  // Dsort(a);
  // printf("\n");
  // Asort(a);
  Dsortodd(a);
  return 0;
}
