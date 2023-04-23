#include<stdio.h>
int main(){
  int i,j,n;
  printf("Hinh vuong rong kich thuoc n = ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
    {
    for (j=1;j<=n;j++)
      {
    if (i==1||i==n)
      	  printf("* ");
      else if (j==1||j==n) printf("* ");
	 else printf("  ");
      }
    printf("\n");
    }
  //
  printf("\n\n\n");
  printf("Dong ho cat kich thuoc 2n-1, nhap vao n = ");
  scanf("%d",&n);
  for (i=0;i<2*n-1;i++)
    {
      for (j=0;j<2*n-1;j++)
	{
	  if (i==0||i==2*n-2) printf("* ");
	  else if (j==i||j==(2*n-i-2)) printf("* ");
	  else printf("  ");
	}
      printf("\n");

    }
  return 0;
}
