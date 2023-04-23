#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(char a[]){
  int i;
  if (strlen(a)!=7){
    return 0;}
  for (i=0;i<3;i++)
    if(isalpha(a[i])==0)
      return 0;
  for (i=3;i<7;i++)
    if(isdigit(a[i])==0)
    return 0;
    return 1;
       }
int main(){
  char a[10];
  printf("Nhap vap string LLLNNNN: ");
  scanf("%[^\n]%*c",a);
  if(check(a)) printf("True\n");
  else printf("False\n");
  return 0;
}
