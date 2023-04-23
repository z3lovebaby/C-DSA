#include<stdio.h>
#include<math.h>
int main(){
  int n,m,abs,max;
  printf("Enter a positive or negative int: ");
  scanf("%i",&n);
  printf("You entered %i.\n",n);
  printf("Abs of value is %i.\n",abs=n<0?-n:n);

  printf("Enter 2 int: ");
  scanf("%i %i",&n,&m);
  printf("You entered %i %i.\n",n,m);
  printf("Max = %i\n",max=n>m?n:m);

  return 0;
}
