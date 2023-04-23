#include<stdio.h>
int main(){
  int i,count;
  count=0;
  for (i=1;i<=100;i++)
    {
      if (i>27) {
	printf("%d ",i);
	count=count+1;
      }
      if (count==10) 
      {
        printf("\n");
        count=0;
      }
    }
    //
    count=0;
    printf("\n");
    printf("\n");
    for (i=1;i<=100;i++)
    {
      if (i>27 && i%2==1) {
	printf("%d ",i);
	count=count+1;
      }
      if (count==10) 
      {
        printf("\n");
        count=0;
      }
    }
  printf("\n");
  return 0;
}
