#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxSize 30
#define maxSt 30
void normalizeStr (char *a){
  int i,j,size;
  ////trimspace
  //trim left
  for (i=0;*(a+i)==' ';i++);
  strcpy(a,a+i);
  // trim right
  size=strlen(a);
  for(i=size-1;*(a+i)==' ';i--);
  *(a+1+i)='\0';
  //
  size=strlen(a);
  for (i=1;i<size-2;i++){
    if(*(a+i)==' '){
      for (j=i+1;*(a+j)==' ';j++);
      strcpy(a+i+1,a+j);
    }
  }//end strimspace

  if (*a>96 &&*a<123){
    *a-=32;
  }
  i=1;
  while(*(a+i)!='\0'){
    if (*(a+i)>64 &&*(a+i)<91 && *(a+i-1)!=' '){
	*(a+i)+=32;
      }
    if(*(a+i)==' '){
      if (*(a+i+1)>96 &&*(a+i+1)<123){
	*(a+i+1)-=32;
      }//end if2
    }//end if1
    i++;
  }//end while
}
int main(){
  char a[maxSt][maxSize];
  int i,ch,num,ck,j;
  do{
    printf("========================================================\n");
    printf("\t\tNormalization String\n");
    printf("\t1. Enter name of student.\n");
    printf("\t2. Normalize.\n");
    printf("\t3. List of student.\n");
    printf("\t4. Exist.\n");
    printf("\t\tYour choice:");
    scanf("%d%*c",&ch);
    switch(ch){
    case 1:
      do{
      printf("Number of student (<%d): ",maxSt);
      scanf("%d%*c",&num);
      if (num<0 || num>maxSt){
	    printf("Error !\n Try again !!\n");}
      }while(num<0||num>maxSt);
      
      for (i=0;i<num;i++){
	do{
	  ck=0;
	  j=0;
      printf("Student %d:",i+1);
      scanf("%[^\n]%*c",a[i]);
      while(a[i][j]!='\0'){
	if (!(a[i][j]==32||isalpha(a[i][j]))){
	  ck=1;
	break;
	}
	j++;
      
      }
      if (ck) printf("String contains invalid characters\nPlease re-enter the name!\n");
	}while(ck);
      }//end for
      printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
    case 2:
      for (i=0;i<num;i++){
      normalizeStr(a[i]);
      }
      printf("Normalization was successful.\n");
      printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
    case 3:
      printf("+-------------------------------------------------------+\n");
      printf("|%14s      |%17s%18c\n","SerialNum","Name",'|');
      printf("|--------------------|----------------------------------|\n");
     for (i=0;i<num;i++){
       printf("|%11.2d%10c         %-25s|\n",i+1,'|',a[i]);
       if(i!=num-1)
	 printf("|--------------------|----------------------------------|\n");
  }
     printf("+-------------------------------------------------------+\n");
     printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
    case 4:
      printf("Thank youuu!\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
    default:
      printf("Your choice is errror!!\n");
      printf("Let try againn!\n");
      printf("\t\t======-Press ENTER to Continue-======");
      while( getchar() != '\n' );
      break;
      }
  }while (ch!=4);
  return 0;
}
 
