#include<stdio.h>
#include<string.h>
void replace(char a[],char x,char y){
  int i;
  i=0;
  while (a[i]!='\0'){
    if (a[i]==x){
      a[i]=y;
    }
    i++;
  }

}
int main(){
  char a[80];
  char c1,c2;
  printf("String: ");
  scanf("%[^\n]%*c",a);
  printf("first char: ");
  scanf("%c%*c",&c1);
    printf("Sec char: ");
  scanf("%c%*c",&c2);
  printf("s1: %s.\nchar 1: %c\n char 2: %c\n",a,c1,c2);
  replace(a,c1,c2);
  printf("After replace: %s.\n",a);
  return 0;
}
