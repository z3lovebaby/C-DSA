#include<stdio.h>
int main(){
  int i,j,k;
  for (i=0;i<=(100/5);i++)
    for (j=0;j<=(100-5*i)/3;j++)
      for (k=3;k<=(100-i-j);k+=3)
	  if ((5*i+3*j+k/3) ==100 && (i+j+3*k)==100){
	    printf("Co %d trau dung\nCo %d trau nam\nCo %d trau gia.\nHoac.",i,j,k);}
  printf("\n");
  return 0;
}
