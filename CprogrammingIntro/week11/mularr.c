#include<stdio.h>
#define size 3
int main(){
  int a[][size]={{1,2,3},{4,5,6},{7,8,9}};
  int b[][size]={{1,1,1},{2,2,2},{3,3,3}};
  int c[size][size];
  int i=0;
  int j=0;
  for (i=0;i<size;i++){
    for (j=0;j<size;j++){
      c[i][j]=0;
      for (int k=0;k<size;k++){
	c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  for (i=0;i<size;i++){
    for (j=0;j<size;j++){
      printf("%3d",a[i][j]);
    }
    if(i==1&&j==3)printf("   .   ");else
    printf("       ");
    //
    for (j=0;j<size;j++){
      printf("%3d",b[i][j]);
    }
    if (i==1&&j==3) printf("   =   ");else
    printf("       ");
    //
    for (j=0;j<size;j++){
      printf("%3d",c[i][j]);
    }
    printf("\n");
  }
 
  return 0;
}
