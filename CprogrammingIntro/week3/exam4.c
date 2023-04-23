#include<stdio.h>
int main(){
  int *ptr;
  int x=12345,y;
  ptr=&x;
  printf("The value of ptr is %p\n",ptr);
  printf("The address of x is %p\n\n",&x);
  printf("Total charac on this line: %n",&y);
  printf("%d\n\n",y);
  y=printf("This line has 28 charac\n");
  printf("%d charac were printed\n\n",y);
  printf("print a %% in a format control string\n");
  printf("%.3f\n",1.23456);
  printf("%6.3f\n",66.666666);
  printf("%*.*f\n",7,2,6.6666);
  return 0;

}
