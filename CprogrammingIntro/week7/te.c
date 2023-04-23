#include<stdio.h>
#include<math.h>
int main(){
  /*int i,x;
  for (i=1;i<=100;i++){
    x+=i;
    printf("%d\n",i);
    if (x % i == 0){
      i--;
      printf("%d\n",i);
    }

  }
  
  char c;
  int count;
  for (count=0; (c=getchar()!='.'); count++)
    { printf("%d\t",count);}
  printf("Number of characters is %d\n", count);

  int i;
  for (i=1;i<=10;i++){
    printf("%6d\t\t%d\n",i,i*i);
  }
  printf("\n");

  int i,count;
  count=1;
  for (i=0;i<=1000;i++){
    if ((i>=100)&&(i / 100) + (i % 10) == (i/10)%10)
      {
	printf("%03d\t",i);
	count++;
      }
    if (count==10)
      {
	printf("\n");
	count=1;
      }
  }

  int i,j,h;
  printf("h = ");
  scanf("%d", &h);
  for (i=1;i<=h;i++)
    {
      for (j=1;j<i+1;j++)
	{
	  printf("*");
	}
      printf("\n");
    }
  */
  int i;
  for (i=3;i<=100;i+=2)
    {
      int j=2;
      for (;j<=sqrt(i);j++)
	{
	  if (i % j ==0)
	    {
	      break;
	    }
	}
      if (j>sqrt(i)) printf("%d\t",i);
    }
  printf("\n");
  return 0;
}
