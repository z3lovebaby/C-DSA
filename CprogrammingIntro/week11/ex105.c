#include<stdio.h>
#define maxSize 15
int maxArr(int a,int b){
  if (a>b) return a;
  else return b;
}
int main(){
  int a[maxSize];
  int i,count,max,num;
  count=0;
  max=0;
  for (i=0;i<maxSize;i++){
    printf("So thu %d: ",i+1);
    scanf("%d",&a[i]);
  }

  ///
  for (i=0;i<maxSize;i++){
    printf("%d ",a[i]);
  }
    printf("\n");
  for (i=0;i<maxSize;i++){
  if (a[i]==0){
    count++;
  }}
  printf("There are %d nums 0 in this arr\n",count); 
  ///////b
  count=0;
  for (i=0;i<maxSize;i++){
  if (a[i]==0){
    count++;
    if (a[maxSize-1]==0){
    max=maxArr(max,count);
  }
  }else{
    max=maxArr(max,count);
    count=0;
  }}
  printf("Max length of the subsequence consecutive numbers: %d \n",max);
  /////
  int check[100];
  for (i=0;i<maxSize;i++){
    count=0;
    if (check[a[i]]==0){
    for (int j=0;j<maxSize;j++){
    if (a[i]==a[j]){
      count++;
    }
    }
    printf("%d: %d lan\n",a[i],count);
    }
    check[a[i]]=1;
  }
  
  return 0;
}
