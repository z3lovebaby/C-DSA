#include<stdio.h>
int main(){
  int i,j,n=10;
  while (n>9){
  printf("Nhap vao so nguyen duong n<10: ");
  scanf("%d",&n);
  }
  for (i=1;i<n+1;i++){
    for (j=1;j<i+1;j++){
      printf("%d",j);
    }
    printf("\n");
  }
  return 0;
}
