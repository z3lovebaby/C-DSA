#include<stdio.h>
#define size 3
int main(){
  int arr1[][size]={{1,2,3},{4,5,6},{7,8,9}};
  int arr2[][size]={{1,1,1},{2,2,2},{3,3,3}};
  int i=0;
  int j=0;
  for (i=0;i<size;i++){
    for (j=0;j<size;j++){
      printf("%3d",arr1[i][j]);
    }
    if(i==1&&j==3)printf("   +   ");else
    printf("       ");
    //
    for (j=0;j<size;j++){
      printf("%3d",arr2[i][j]);
    }
    if (i==1&&j==3) printf("   =   ");else
    printf("       ");
    //
    for (j=0;j<size;j++){
      printf("%3d",arr1[i][j]+arr2[i][j]);
    }
    printf("\n");
  }
  return 0;
}
