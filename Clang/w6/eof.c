#include <stdio.h>
int main()
{
  int aNum, sum = 0;
  while
    (scanf("%d",&aNum)!=EOF)
    {
      sum += aNum;
    }
  printf("Sum is %d\n", sum);
  return 0;
}
