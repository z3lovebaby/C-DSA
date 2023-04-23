#include<stdio.h>
int main(){
  int mark;
  printf("mark = ");
  scanf("%d",&mark);
  switch (mark){
  case 10:
  case 9:
    printf("Excellent\n");
    break;
  case 7:
  case 8:
    printf("Good\n");
    break;
  case 6:
  case 5:
	printf("Average\n");
	break;
  default: printf("Other\n");}
	
  return 0;
}
