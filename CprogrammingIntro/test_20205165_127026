#include<stdio.h>
int main(){
  int a,b,c;
  printf("Nhap vao gia tri a,b va c\n");
  scanf("a=%d b=%d c=%d",&a,&b,&c);
  if (a==b)
    {
      if (b==c)
	{
	  printf("max, min bang nhau, gia tri la %d\n",a);
	}
      else
	{
	  if (b>c)
	    {
	      printf("c min, min = %d\n a va b max, max = %d\n",c,a);
	    }else
	    {
	      printf("a va b min, min = %d\n c max, max = %d\n",a,c);
	    }
	}
    }
  else if (a==c)
    {
      if (a>b)
	{
	  printf("b min, min = %d\n a va c max, max = %d\n",b,a);
	}else
	{
	  printf("a va c min, min = %d\n b max, max = %d\n",c,b);
	}
    }
  else {if (a>b && a>c)
      {
	printf("a max, max = %d\n",a);
      }else
      {
	if (b>c){
	  printf("b max, max = %d\n",b);
	}else{printf("c max, max = %d\n",c);}
      }
    if (a<b && a<c)
      {
	printf("a min, min = %d\n",a);
      }else
      {
	if (b>c){
	  printf("c min, min = %d\n",c);
	}else{printf("b min, min = %d\n",b);}
      } }
  return 0;
}
