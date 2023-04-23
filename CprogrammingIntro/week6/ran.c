#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  int r,urNu;
  srand((unsigned)time(0));
  r = rand() %10;
  printf("urNum that you choose: ");
  scanf("%d",&urNu);
  if (r==urNu)
    {
      printf("Your num is correct\n");
    }else if (urNu<r)
    {
      printf("your guess was too small\n");
    }else
    printf("Your guess was too big\n");
  printf("The correct number: %d\n",r);
  return 0;

}
