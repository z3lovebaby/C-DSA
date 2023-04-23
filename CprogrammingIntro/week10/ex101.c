#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxSize 100
int min(int a,int b){
  if (a<b) return a;
  else return b;
}
int main(){
  int num[maxSize];
  int ch,i;
  srand((int)time(0));
  for (i=0;i<maxSize;i++){
    num[i] = rand()%100+1;
  }
  do{
    int sum=0;
    int result=10000;
    printf("1.In 100 so ngau nhien form 10x10\n");
    printf("2. Tong so le\n");
    printf("3. Min\n");
    printf("4. Thoat\n");
    printf("Lua chon cua ban: ");
    scanf("%d",&ch);
    switch(ch){
    case 1:
      for (int j=0;j<10;j++){
	for (int m=0;m<10;m++){
	  printf("%7d",num[10*j+m]);
	}
	printf("\n");
      }
      break;
    case 2:
      for (i=0;i<maxSize;i++){
	if (num[i]%2!=0){
	  sum+=num[i];
	}
      }
      printf("Sum: %d\n",sum);
      break;
    case 3:
      for (i=0;i<maxSize;i++){
	result=min(result,num[i]);
      }
      printf("Min: %d\n",result);
    }
    
  }while (ch!=4);
  
  return 0;
}
