#include<stdio.h>
#include<math.h>
int main(){
  int n,i;
  int a[7]={0,0,0,0,0,0,0};
  int t[7]={500000,200000,100000,50000,20000,10000,5000};
  while(1){
    printf("Type the value of money: ");
    scanf("%d",&n);
    if(n%5000==0){
      break;}
  }
  printf("%d\n",n);
  for(i=0;i<7;i++){
    while(n>0&&(n/t[i])>0){
      if((n/t[i])>0){
	    a[i]=n/t[i];
	    n=n%t[i];}
    }
  }
  printf("%d= ",n);
  for(i=0;i<7;i++){
    if(a[i]!=0){
      printf("%d tien %d  ",a[i],t[i]);}}
  printf("\n");
  return 0;
}
