#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct
{
  long ID;
  int chapter;
  char content[50];
}Question;

//funct read
void read(Question * a,long i){
  a->ID=i+1;
  do{
    printf("Enter chapter and content(form chapter content): ");
    scanf("%d %[^\n]%*c",&a->chapter,a->content);
    if((a->chapter)<1||(a->chapter)>20){
      printf("Invalid chapter. Must be >=1 and <=20.Try again.\n");
    }
    if(strlen(a->content)>50){
      printf("Content too long. Must be <=50.Try again.\n");
    }
  }while((a->chapter)<1||(a->chapter)>20||strlen(a->content)>50);

}
int checkstr(char a[]){
  int i=1;
  if (!(isupper(a[0]))) return 0;
  while(a[i]!='\0'){
    if (a[i]=='*'||a[i]=='$'||a[i]=='\\') return 0;
    i++;
  }
  return 1;
}
int main(){
  Question q[100];
  int ch,j,n,fid,i,check;
  int arr[20]={0};
  do{
    printf("1. Read.\n");
    printf("2. Search.\n");
    printf("3. Add.\n");
    printf("4. Count.\n");
    printf("5. Check.\n");
    printf("6. Exist.\n");
    printf("============================================\n");
    printf("\tYour choice: ");
    scanf("%d%*c",&ch);
    switch(ch){
    case 1:
      do{
	printf("The number question (>0 and <=100) : ");
	scanf("%d%*c",&n);
	if(n<1||n>100) printf("Must be >0 and <=100.\nTry again until get satifise num.\n");
      }while((n<1||n>100));
      for(i=0;i<n;i++){
	read(&q[i],i);
	if(i!=n-1){
	  printf("Add successfull. Enter to continue.\n");
	  while(getchar()!='\n');
	}

      }
      //in ra list q
      printf("Process read data complete. Enter to print LIST.\n");
      while(getchar()!='\n');
      printf("+======================================================================================+\n");
      printf("|   ID   |   Chapter   |                                Content                        |\n");
      for(i=0;i<n;i++){
	printf("|   %03ld  |     %02d      | \"%-50s          \"|\n",q[i].ID,q[i].chapter,q[i].content);
      }
      printf("+======================================================================================+\n");
      printf("Enter to back the menu and continue.\n");
      while(getchar()!='\n');
      break;
    case 2:
      check=0;
      printf("ID that you want to search: ");
      scanf("%d%*c",&fid);
      printf("TABLE SEARCH\n");
      printf("+======================================================================================+\n");
      printf("|   ID   |   Chapter   |                                Content                        |\n");
      for(i=0;i<n;i++){
	if(fid==q[i].ID){
	  check=1;
	  printf("|   %03ld  |     %02d      | \"%-50s          \"|\n",q[i].ID,q[i].chapter,q[i].content);
	}
      }//end for
      printf("+======================================================================================+\n");
      if(!check) printf("ID Not Found.\n");
      printf("Enter to back the menu and continue.\n");
      while(getchar()!='\n');
      break;
    case 3:
      printf("Add a new question for bank question.\n");
      if(n>100){
	printf("Bank is enough quetstion <100question>.Try again when system update.\n ");
	break;
      }else{
	read(&q[n],n);
	n++;
	printf("Add successfull.Enter to print list\n");
	while(getchar()!='\n');
	printf("+======================================================================================+\n");
	printf("|   ID   |   Chapter   |                                Content                        |\n");
	for(i=0;i<n;i++){
	  printf("|   %03ld  |     %02d      | \"%-50s          \"|\n",q[i].ID,q[i].chapter,q[i].content);
	}
	printf("+======================================================================================+\n");
	printf("Enter to back the menu and continue.\n");
	while(getchar()!='\n');
	break;
      }

      break;
    case 4:
      for(i=0;i<n;i++){
	for(j=0;j<20;j++)
	  if(q[i].chapter==j+1) arr[j]++;
      }
      printf("+==========================+\n");
      printf("|  Chap   |      Count     |\n");
      for (i=0;i<n;i++){
	if(arr[i]!=0){
	  printf("|   %02d    |      %02d        |\n",i+1,arr[i]);
	}
      }
      printf("+==========================+\n");
      break;
    case 5:
      printf("+======================================================================================+\n");
      printf("|   ID   |   Chapter   |                                Content                        |\n");
      for(i=0;i<n;i++){
	if(checkstr(q[i].content))
	  printf("|   %03ld  |     %02d      | \"%-50s          \"|\n",q[i].ID,q[i].chapter,q[i].content);
      }
      printf("+======================================================================================+\n");
      break;
    case 6:
      printf("The program will exist. Thank you.\n");
      printf("Enter to exist.\n");
      while(getchar()!='\n');
      break;
    default:
      printf("Invalid choice. Must be 1 - 6. Try again.\n");
      printf("Enter to back the menu and continue.\n");
      while(getchar()!='\n');
      break;
    }//end switch
  }while(ch!=6);
  return 0;
}
