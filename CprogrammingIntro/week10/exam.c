#include<stdio.h>
#define MONTHS 12
int main(){
  int rainfall[MONTHS];
  int i;
  for (i=1;i<=MONTHS;i++){
    printf("Enter rainfall %d: ",i);
    scanf("%d",&rainfall[i-1]);
  }
  for (i=0;i<MONTHS;i++){
    printf("%5d",rainfall[i]);
  }
  printf("\n");
  return 0;
}
