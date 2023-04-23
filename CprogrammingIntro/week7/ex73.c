#include<stdio.h>
int main(){
  int i,count;
  count=0;
  for (i=100;i<1000;i++){
    if (i % 3 ==0&&(i/100)+(i%10)==(i%100)/10){
      if (count %10 ==0)
	printf("\n%d  ",i);
      else printf("%d  ",i);
      count=count+1;
    }
  }


  return 0;
}
