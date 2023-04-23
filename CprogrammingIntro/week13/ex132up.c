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
void findsubstr(char a[],char b[]){
  int i,j;
  char temp[40],t[3];
  for (i=0;i<strlen(a)-strlen(b);i++){
    for (j=i;j<strlen(b)+i;j++){
      strcpy(t,a[j]);
      strcat(temp,t);
    }
    if (strcmp(temp,b)==0){
      printf("vi tri:%d",i+1);
    }
    strcpy(temp,"");
  }
}
int main(){
  char a[80],b[80];
  char c1,c2;
  printf("String: ");
  scanf("%[^\n]%*c",a);
  printf("String: ");
  scanf("%[^\n]%*c",b);
  printf("first char: ");
  scanf("%c%*c",&c1);
    printf("Sec char: ");
  scanf("%c%*c",&c2);
  printf("s1: %s.\nchar 1: %c\n char 2: %c\n",a,c1,c2);
  replace(a,c1,c2);
  printf("After replace: %s.\n",a);
  findsubstr("le van nam","na");
  return 0;
}
