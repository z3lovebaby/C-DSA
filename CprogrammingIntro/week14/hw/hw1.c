#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define maxL 30
int checkValidnumPlate(char s[]);
int main(){
  int ch;
  char s[maxL];
  do{
    printf(" ======================================================\n");
    printf("           CHECKING VALID NUMBER PLATE\n");
    printf(" - The number plate for motocycles in HN is structed as follow: DD-LDDDD.DD\n");
    printf(" - In that, D is a number. L is an uppercase alphabet (A-Z).\n");
    printf(" - The first DD is in the range 29-32.\n");
    printf(" \t1. Input and check!\n");
    printf(" \t2. Exist.\n");
    printf(" ======================================================\n");
    printf("Your choice: ");
    scanf("%d%*c",&ch);
    switch(ch){
    case 1:
      printf("Your number plate: ");
      scanf("%[^\n]%*c",s);
      printf("\t\t======-Press ENTER to Check-======");
      while( getchar() != '\n' );
      if(checkValidnumPlate(s)){
	printf("True. It is a number plate for motocycles in HN !\n");
	printf("Your plate: \"%s\"\n",s);
      }else{
	printf("False!\n");
	printf("Your plate: \"%s\"\n",s);
    }
      printf("\t\tPress ENTER to continue.....");
      while( getchar() != '\n' );
      break;
    case 2:
      printf("Thank you ! See you again!\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
    default:
      printf("Your choice is not correct !\n Press Enter to try again!\n");

    }
  }while(ch!=2);
  return 0;
}
///
//////
////////
int checkValidnumPlate(char s[]){
  int temp[4]={29,30,31,32};
  char *to;
  int i,check,count=1;
  if (strlen(s)!=11) return 0;
  to=strndup(s,2);
  check=atoi(to);
  for (i=0;i<4;i++){
    if (check==temp[i]) count--;
  }
  if (count) return 0;
  if (s[2]!='-'||s[8]!='.') return 0;
  if (!(isupper(s[3]))) return 0;
  for (i=4;i<11;i++){
    if (i!=8){
      if (!(isdigit(s[i]))) return 0;
    }
  }

  return 1;
}
