#include<stdio.h>
void reverseInt(int *a){
  int arr[100];
  int count=0;
  while(*a>10){
    arr[count]=*a % 10;
    *a=*a/10;
    count++;
  }
  for (int i=0;i<count;i++){
    for (int j=count;j>i;j--){
      arr[i]=arr[i]*10;
    }//end for2
    *a+=arr[i];
  }//end for1
}
void swap(int *a, int *b){
  int temp =*b;
  *b=*a;
  *a=temp;
}
int main(){
  int a;
  do{
    printf("Nhap vao so nguyen duong:\n");
    printf("a = ");
    scanf("%d",&a);
    if (a<1) printf("Nhap lai so nguyen duong !!\n\n\n");
  }while (a<1);
  
  printf("*******************************\n");
  printf("Before Reverse\na = %d\n",a);
  reverseInt(&a);
  printf("After reverse\na = %d\n",a);
  return 0;
}
