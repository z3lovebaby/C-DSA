#include<stdio.h>
#include<string.h>
int check(char *a,char *b){
  int l1,l2,t;
  l2=strlen(b);
  l1=strlen(a);
  while (l2!=0){
    if (*(b+l2-1)!=*(a+l1-1)) return 0;
    l2-=1;
    l1-=1;
  }
  return 1;
}
int main(){
  char a[40]="abc abc tt";
  char b[10]="c tt";
  if(check(a,b)) printf("True\n");
  else printf("False\n");
  return 0;
}
