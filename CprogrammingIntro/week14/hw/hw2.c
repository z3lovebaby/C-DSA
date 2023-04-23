#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxL 500
#define maxnumQ 10
typedef struct Setqu
{
  char qu[maxL];
  char A[maxL],B[maxL],C[maxL];
  char key;
}qs;

typedef struct stu
{
  char as;
  int mark;
  int check[10];
} st;

//func
void createQ(qs *question,int a){
  printf("Let input data for question %d\n",a+1);
  printf("Q%d: ",a+1);
  scanf("%[^\n]%*c",question->qu);
  printf("Answer A: ");
  scanf("%[^\n]%*c",question->A);
  printf("Answer B: ");
  scanf("%[^\n]%*c",question->B);
  printf("Answer C: ");
  scanf("%[^\n]%*c",question->C);
  do{
    printf("Key: ");
    scanf("%c%*c",&question->key);
    question->key=toupper(question->key);
    if(!(question->key=='A'||question->key=='B'||question->key=='C')) printf("Must be A or B or C. Not exist answer %c\n",question->key);
  }while(!(question->key=='A'||question->key=='B'||question->key=='C'));


  printf("Question %d was succesfull !\n",a+1);
  printf("\t\t......Press ENTER to continue.....");
  while( getchar() != '\n' );
}
int main(){
  qs question[maxnumQ];
  st student[10];
  int i,j,ch,numq,numst,countdeco;
  do{
    printf("==================================================\n");
    printf("MULTI CHOICE EXAM PROGRAM\n");
    printf(" 1. Create question.\n");
    printf(" 2. Only list question.\n");
    printf(" 3. Do the exam.\n");
    printf(" 4. Result\n");
    printf(" 5. Exist.\n");
    printf("==================================================\n");
    printf("Your choice: ");
    scanf("%d%*c",&ch);
    switch(ch){
    case 1:
      //get the numq
      do{
	printf("The number question(<%d): ",maxnumQ);
	scanf("%d%*c",&numq);
	if (numq<0||numq>maxnumQ) printf("Error! The number question is not negative number!");
      }while(numq<0||numq>maxnumQ);
      //create Q..for..
      for (i=0;i<numq;i++){
	createQ(&question[i],i);
      }

      break;
    case 2:
      printf("\t\tLIST QUESTION\n");
      for (i=0;i<numq;i++){

	printf("---------------------------------------------------------------------------\n");
	printf("Q%d:%s\n",i+1,question[i].qu);
	printf("---------------------------------------------------------------------------\n");
	printf("\t\tA. %s\n",question[i].A);
	printf("\t\tB. %s\n",question[i].B);
	printf("\t\tC. %s\n",question[i].C);
      }
      printf("\t\t======-Press ENTER to continue-======");
      while( getchar() != '\n' );
      break;
    case 3:
      //get numstudent
      do{
	printf("The number student will do the exam: ");
	scanf("%d%*c",&numst);
	if (numst<0) printf("Error! The number student is not negative number!\n");
      }while(numst<0);
      ///
      for (j=0;j<numst;j++){
	student[j].mark=0;
      }
      //
      for (i=0;i<numq;i++){
	printf("---------------------------------------------------------------------------\n");
	printf("Q%d:%s\n",i+1,question[i].qu);
	printf("---------------------------------------------------------------------------\n");
	printf("\t\tA. %s\n",question[i].A);
	printf("\t\tB. %s\n",question[i].B);
	printf("\t\tC. %s\n",question[i].C);
	for (j=0;j<numst;j++){
	  do{

	    printf("Answer of st %d for Q%d: ",j+1,i+1);
	    scanf("%c%*c",&student[j].as);
	    student[j].as=toupper(student[j].as);
	    if(!(student[j].as =='A'||student[j].as =='B'||student[j].as =='C'))
	      {
		printf("A or B or C or lowcase of them. Let try again!\n");
	      }

	  }while(!(student[j].as =='A'||student[j].as =='B'||student[j].as =='C'));
	  if (student[j].as==question[i].key){
	    student[j].mark++;
	    student[j].check[i]=1;
	  }else student[j].check[i]=0;

	}//end ng j cau i
      }
      printf("\t\t======-Press ENTER to finish and back to menu-======");
      while( getchar() != '\n' );
      break;
    case 4:
      printf("+================================================================+\n");
      printf("|    ID Student      |   Mark   |          List ans correct      |\n");
      for (j=0;j<numst;j++){
	countdeco=30-student[j].mark*2;
	printf("|%10.02d %10c%6.02d %4c  ",j+1,'|',student[j].mark,'|');
	for (i=0;i<numq;i++){
	  if (student[j].check[i]) printf("%d ",i+1);
	}
	while(countdeco>0){
	  printf(" ");
	  countdeco--;
	}
	printf("|\n");
      }
      printf("+================================================================+\n");
      printf("\t\t: In ascending order of points: \n");
      for(i = 0; i < numst; i++){
	for(j = i + 1; j < numst; j++){
	  if(student[i].mark < student[j].mark){
	    st tg = student[i];
	    student[i] = student[j];
	    student[j] = tg;
	  }
	}}
      for (i=0;i<numst;i++){
        printf("%d\n",student[i].mark);
      }
      break;
    case 5:
      printf("Thank you ! See you again!\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
    default:
      printf("Your choice is not correct !\n Press Enter to try again!\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
    }
  }while(ch!=5);
  return 0;
}
