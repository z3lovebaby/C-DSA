#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxSize 6
void GetArr(int *a){
  int i;
  srand((int)time(0));
  printf("THE ORIGIONAL ARRAY:\n");
  printf("+================================+\n  ");
  for (i=0;i<maxSize;i++){
    *(a+i)=rand()%10;
    printf(" %d   ",*(a+i));
  }
  printf("\n+================================+\n");
}
void Subarr(int *a){
  int i,j,k,count=1;
  for (i=0;i<maxSize;i++){
    for (j=0;j<maxSize-i;j++){
      printf("SUB %d:\t",count);

      for (k=0;k<=j;k++){
	printf(" %d |",*(a+i+k));
      }
      count++;
      printf("\n");
      printf("=============================\n");

    }

  }
}
int main(){
  int arr[maxSize];
  GetArr(arr);
  printf("\t\t=-Press ENTER to printf RESULT-=");
  while( getchar() != '\n' );
  Subarr(arr);

}
