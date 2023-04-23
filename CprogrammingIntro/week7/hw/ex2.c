#include<stdio.h>
int main(){
  int i,j;
  printf("Bang ASCII code:\n");
  for (i=1;i<=256;i++)
    {
      if (i<=32)
	{
	  printf("%03d  %-5c",i-1,' ');
	  if (i % 16 ==0) printf("\n\n");
	}else
	{
	  printf("%03d  %-5c",i-1,i-1);
	  if (i % 16 ==0) printf("\n\n");
	}
    }
  printf("\n");
  //bang cuu chuong
  printf("Bang cuu chuong:\n");
  for (i=1;i<=9;i+=3)
    {
      for (j=1;j<=10;j++)
	{
	  printf("%2d * %2d = %3d %5d * %2d = %3d %5d * %2d = %3d\n",i,j,i*j,i+1,j,(i+1)*j,i+2,j,(i+2)*j);
	}
      printf("\n");
    }
  return 0;
}
