#include <stdio.h>
int main(){
  int i;
  printf("Cac chu so co 2 cso co tong cac chu so la 10:\n");
  for (i=10;i<100;i++){
       if (i/10 + i%10==10)
      {
	printf("Num: %d\n",i);
      }
  }
  return 0;

}
