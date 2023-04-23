#include<stdio.h>
int main(){
  float f=1234.034;
  printf("%.3f\n",f);
  printf("%.5f\n",f);
  printf("%*.*f\n",7,3,f);
  return 0;



}
