#include<stdio.h>
int main(){
  double a,b;
  char op;
  printf("Input 2 real num a,b: ");
  scanf("%lf %lf",&a,&b);
  printf("Input operator ( +,-,*,/): ");
  scanf(" %c",&op);
  switch (op){
  case '+':
    printf("%.1lf + %.1lf = %.1lf\n",a,b,a+b);
    break;
  case '-':
    printf("%.1lf - %.1lf = %.1lf\n",a,b,a-b);
    break;
  case '*':
    printf("%.1lf * %.1lf = %.1lf\n",a,b,a*b);
    break;
  case '/':
    if (b!=0)
    printf("%.1lf / %.1lf = %.1lf\n",a,b,a/b);
    else printf("Error, let input b#0\n");
    break;
  default:
    printf("Error!!\n");
  }
  return 0;
}
