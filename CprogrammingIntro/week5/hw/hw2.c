#include <stdio.h>
int main(){
  int old,h1,o1,you1,you2;
  float urH,h;
  printf("Nhap vao chieu cao cua ban (cm): ");
  scanf("%f",&urH);
  printf("Hi Name1:\n");
  printf("How old are you? ");
  scanf("%d",&old);
  o1=old <=16?-2:(old >=21)? 2:5;
  printf("===>Point: %d\n",o1); 
  printf("What is your height (cm)? ");
  scanf("%f",&h);
  printf("%f\n",urH);
  h1= (h>=urH) ?-1:(h<=(urH-30)?-2:3);
  printf("%f\n",urH);
  printf("===>Point: %d\n",h1);
  you1=o1+h1;
  printf("Hi Name2:\n");
  printf("How old are you? ");
  scanf("%d",&old);
  o1=old <=16?-2:(old >=21)? 2:5;
  printf("===>Point: %d\n",o1); 
  printf("What is your height (cm)? ");
  scanf("%f",&h);
  printf("%f\n",urH);
  h1= (h>=urH) ?-1:(h<=(urH-30)?-2:3);
  printf("%f\n",urH);
  printf("===>Point: %d\n",h1);
  you2=o1+h1;
  printf("__________________________________________________\n");
  printf("Diem cua Name1:\t%d\n",you1);
  printf("Diem cua Name2:\t%d\n",you2);
  you1>you2 ? printf("Name1, are you free on Saturday ? \n"): (you1==you2 ? printf("Name1, are you free on Saturday?\nName2, are you free on Sunday\n"):printf("Name2, are you free on Saturday\n"));
  return 0;
}
