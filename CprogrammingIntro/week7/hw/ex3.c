#include<stdio.h>
int main(){
  int i,h,j;
  printf("Tam giac.\nNhap vao chieu cao: ");
  scanf("%d",&h);
  for (i=0;i<h;i++)
    {
      for (j=1;j<=2*h-1;j++)
	{
	  if (j<=(2*h-1)/2 - i || j>(2*h-1) - (2*h-1)/2+i)
	    {
	      printf("   ");
	    }else
	    {
	      printf(" * ");
	    }
	  
	}
      printf("\n");
    }
  printf("Hinh thoi chieu cao 2h-1.\nNhap vao h: ");
  scanf("%d",&h);
  for (i=0;i<h;i++)
    {
      for (j=1;j<=2*h-1;j++)
	{
	  if (j<=(2*h-1)/2 - i || j>(2*h-1) - (2*h-1)/2+i)
	    {
	      printf("   ");
	    }else
	    {
	      printf(" * ");
	    }
	  
	}
      printf("\n");
    }
   for (i=h-2;i>=0;i--)
    {
      for (j=1;j<=2*h-1;j++)
	{
	  if (j<=(2*h-1)/2 - i || j>(2*h-1) - (2*h-1)/2+i)
	    {
	      printf("   ");
	    }else
	    {
	      printf(" * ");
	    }
	  
	}
      printf("\n");
    }
   return 0;
}
