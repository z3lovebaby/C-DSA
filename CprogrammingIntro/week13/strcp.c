#include<stdio.h>
char *my_strcpy(char *des,char *source){
  char *p=des;
  while(*source!='\0'){
  *p++=*source++;

  
}
  *p='\0';
return des;
}
int main(){
  char a[40],b[40];
  printf("S1: ");
  scanf("%[^\n]%*c",a);
  printf("s1: %s\ns2 copy  from s1: %s\n",a,my_strcpy(b,a));
  return 0;

}
