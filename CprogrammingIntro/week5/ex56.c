#include<stdio.h>
int main(){
  int n;
  printf("Nhap vao so hoc sinh n: ");
  scanf("%d",&n);
  printf("The number of stds in the smalles class: %d\n",n/7);
  printf("The number of stds in the largest class: %d\n",(n+6)/7);
  printf("The avr number of stds: %d\n",n/7);
  return 0;
}
