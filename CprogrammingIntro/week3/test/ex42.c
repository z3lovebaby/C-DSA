#include<stdio.h>
int main(){
  int i=0;
  char ch='*';
  float x=0;
  char s[100];
  int n=scanf("%d%c%f",&i,&ch,&x);
  printf("%d %c %f\n",i,ch,x);
  scanf("%[^\n]*c",s);
  printf("str=%s\n",s);

}
