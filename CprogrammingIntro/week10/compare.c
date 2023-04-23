#include<stdio.h>
#define size 10
int compare2ar(int a1[],int a2[]){
  int i;
  for (i=0;i<size;i++){
    if (a1[i]!=a2[i]) return 0;
  }
  return 1;
}

int main(){
  int a1[size],a2[size];
  int i;
  for (i=0;i<size;i++){
    printf("a1[i+1] & a2[i+1] (ex: 3 5): ");
    scanf("%d %d",&a1[i],&a2[i]);
  }
  if (compare2ar(a1,a2)){
    printf("2 mang = nhau\n");
  }
  else printf("2 mang k bang nhau\n");
  return 0;
}
