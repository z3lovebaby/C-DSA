#include<stdio.h>
int main(){
  char c;
  printf("Menu:\n1.Character(A).\n3.Digit(B).\n3.Quit(C).\n");
  do{
    printf("Your choice: ");
    scanf("%c%*c",&c);
    switch (c){
    case 'A': printf("A.B.C.D.E.F.G\n");
      break;
    case 'B': printf("1 2 3 4 5 6\n");
      break;
    case 'C': printf("Quit\n");
      break;
    default: printf("Error\n");
      break;
    }
  }while (c != 'C');
  return 0;
}
