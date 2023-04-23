#include<stdio.h>
int main(){
  int i=873;
  double f=123.945666;
  char a[]="Happy birthday";

  printf("Using precision for integer\n");
  printf("\t%2d\n\t%.9d\n\n",i,i);
  printf("Using precision for floating-point numbers\n");
  printf("t%.3f\n\t%.3e\n\t%.3g\n\n",f,f,f);
  printf("Using it for strings\n");
  printf("\t|%-30s|\n",a);
  return 0;





}
