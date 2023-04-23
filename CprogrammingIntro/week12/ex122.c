#include<stdio.h>
#define maxSize 5
void getArr(double* a){
  int i=0;
  for (i=0;i<maxSize;i++){
    printf("a[%d] = ",i);
    scanf("%lf",a+i);
  }
  ///
}
double* maximum(double *a){
  if (a==NULL) return NULL;
  int i;
  double *max=a;
  for (i=1;i<maxSize;i++){
    if (*(a+i)>*max) max=(a+i);
  }
  return max;
}
int main(){
  double a[maxSize];
  getArr(&a);
  printf("Maxx is %p and Value %lf\n",maximum(&a),*maximum(&a));
  return 0;
}
