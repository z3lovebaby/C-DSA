#include<stdio.h>
#include<string.h>
#define maxSize 30
void trim_l (char *a){
  int i;
  //trim left
  for (i=0;*(a+i)==' ';i++);
  strcpy(a,a+i);
}
void trim_r(char *a){
  int i,size;
  // trim right
  size=strlen(a);
  for(i=size-1;*(a+i)==' ';i--);
  *(a+1+i)='\0';
  //
}
void trim_m(char *a){
  int i,j,size;
  size=strlen(a);
  for (i=1;i<size-2;i++){
    if(*(a+i)==' '){
      for (j=i+1;*(a+j)==' ';j++);
      strcpy(a+i+1,a+j);
    }//end if
  }//end for
}//end fun
int main(){
  char a[maxSize];
  int ch;
  do{
    printf("========================================================\n");
    printf("\t\tTRIMSPACE PROGRAM\n");
    printf("1. Input string.\n");
    printf("2. Trimleft.\n");
    printf("3, Trimright.\n");
    printf("4. Trimmidle.\n");
    printf("5. Exist.\n");
    printf("\tYour choice: ");
    scanf("%d%*c",&ch);
    switch(ch){
    case 1:
      printf("Enter string: ");
      scanf("%[^\n]%*c",a);
      printf("String:\n%s\n",a);
      printf("Length of string: %ld\n",strlen(a));
      printf("========================================================\n");
      printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
    case 2:
      printf("Original string:\n%s\n",a);
      trim_l(a);
      printf("After trimLeft:\n%s\n",a);
      printf("Length of string: %ld\n",strlen(a));
      printf("========================================================\n");
      printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
    case 3:
      printf("Original string:\n%s\n",a);
      trim_r(a);
      printf("After trimRight:\n%s\n",a);
      printf("Length of string: %ld\n",strlen(a));
      printf("========================================================\n");
      printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
    case 4:
      printf("Original string:\n%s\n",a);
      trim_m(a);
      printf("After trimMiddle:\n%s\n",a);
      printf("Length of string: %ld\n",strlen(a));
      printf("========================================================\n");
      printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
    case 5:
      printf("Thank youuu!\n");
      printf("========================================================\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
    default:
      printf("Your choice is errror!!\n");
      printf("Let try againn!\n");
      printf("========================================================\n");
      printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
    }//end switch
  }while (ch!=5);
  return 0;
}
