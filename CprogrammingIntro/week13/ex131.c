#include<stdio.h>
#include<string.h>
int countBlank(char a[]){
  int i,count;
  count=0;
  for (i=0;i<strlen(a);i++){
    if (a[i] ==' '){
      count++;
    }
  }
  return count;
}
int main(){
  char a[20];
  printf("Nhap str a: ");
  scanf("%[^\n]%*c",a);
  printf("There are %d blank in the string: %s",countBlank(a),a);
  printf("\n");
  return 0;
}
