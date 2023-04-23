#include<stdio.h>
#define maxSize 30
#include<string.h>
#include<ctype.h>
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
typedef struct
{
  int d,m,y;
}date;

typedef struct
{
  char id[9];
  char name[31];
  float grade;
  char class;
  date birthdate;
}student;
void getdata(student *st, int i){
  printf("Student %d, Your name: ",i+1);
  scanf("%[^\n]%*c",st->name);
  printf("Your ID student number: ");
  scanf("%[^\n]%*c",st->id);
  do{
    printf("Your grade: ");
    scanf("%f%*c",&st->grade);
    if(st->grade<0){
      printf("False\n");
    }
  }while(st->grade<0);
  printf("Your birth(dd/mm/yy): ");
  scanf("%d%*c%d%*c%d%*c",&st->birthdate.d,&st->birthdate.m,&st->birthdate.y);
  if(st->grade<=10&&st->grade>=9){
    st->class='A';
  }else if(st->grade>=8){
    st->class='B';
  }else if (st->grade>=6.5){
    st->class='C';
  }else{
    st->class='D';
  }
}
int compare(date day1, date day2)
{
	if (day1.y < day2.y) return 1;
	else if (day1.y > day2.y) return -1;
	else 
	{
		if (day1.m < day2.m) return 1;
		else if (day1.m > day2.m) return -1;
		else 
		{
			if (day1.d < day2.d) return 1;
			else if (day1.d > day2.d) return -1;
			else return 0;
		} 
	}
}
int main(){
  int ch,numst,i,add,j,on;
  char b[8];
  student st[maxSize],temp;
  add=0;
  do{
    printf("1. Input data.\n");
    printf("2. List student.\n");
    printf("3. Add more student.\n");
    printf("4. Sort by date.\n");
    printf("5. Sort by dsc mark and asc date.\n");
    printf("6. Normallization name.\n");
    printf("7. Search by ID student.\n");
    printf("8. Exist.\n");
    printf("Your choice: ");
    scanf("%d%*c",&ch);
    switch(ch){
    case 1:
      printf("So hoc sinh: ");
      scanf("%d%*c",&numst);
      for (i=0;i<numst;i++){
	getdata(&st[i],i);
      }
      break;
    case 2:
      //sort
      for(int i = 0; i < numst - 1; i++){
	for(j = i + 1; j < numst; j++){
	  if(st[i].grade < st[j].grade){
	    // Hoan vi 2 so a[i] va a[j]
	    temp = st[i];
	    st[i] = st[j];
	    st[j] = temp;
	  }
	}
      }
      printf("=========================================================\n");
      printf("|    Id    |           Name          | Grade  |  Class   |\n");
      for(i=0;i<numst;i++){
	printf("| %8s |%20s     |  %.2f  |  %5c   |\n",st[i].id,st[i].name,st[i].grade,st[i].class);
      }
      printf("=========================================================\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
      case 3:
      do{
        printf("The number student that you want to add: ");
        scanf("%d%*c",&add);
        if(add<0||add+numst>maxSize){
          printf("Qua so luong cho phep !\n");
        }
      }while((add<0||add+numst>maxSize));
      for (i=numst;i<add+numst;i++){
	getdata(&st[i],i);
      }
      numst+=add;
      
      break;
      case 4:
      for (i=0;i<numst-1;i++){
        for (j=i+1;j<numst;j++){

          if(compare(st[i].birthdate,st[j].birthdate)<0){
            temp=st[i];
            st[i]=st[j];
            st[j]=temp;
          }
        }
      }
      printf("========================================================================\n");
      printf("|    Id    |           Name          | Grade  |  Class   |    Birth    |\n");
      for(i=0;i<numst;i++){
	printf("| %8s |%20s     |  %.2f  |  %5c   |  %02d-%02d-%02d |\n",st[i].id,st[i].name,st[i].grade,st[i].class,st[i].birthdate.d,st[i].birthdate.m,st[i].birthdate.y);
      }
      printf("========================================================================\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
      case 5:
      for(int i = 0; i < numst - 1; i++){
	for(j = i + 1; j < numst; j++){
	  if(st[i].grade < st[j].grade){
	    // Hoan vi 2 so a[i] va a[j]
	    temp = st[i];
	    st[i] = st[j];
	    st[j] = temp;
	  }else if(st[i].grade == st[j].grade){
      if(compare(st[i].birthdate,st[j].birthdate)>0){
            temp=st[i];
            st[i]=st[j];
            st[j]=temp;
          }
    }
	}}
  printf("========================================================================\n");
      printf("|    Id    |           Name          | Grade  |  Class   |    Birth    |\n");
      for(i=0;i<numst;i++){
	printf("| %8s |%20s     |  %.2f  |  %5c   |  %02d-%02d-%02d |\n",st[i].id,st[i].name,st[i].grade,st[i].class,st[i].birthdate.d,st[i].birthdate.m,st[i].birthdate.y);
      }
      printf("========================================================================\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
      break;
      case 6:
        printf("========================================================================\n");
      printf("|    Id    |           Name          | Grade  |  Class   |    Birth    |\n");
      for(i=0;i<numst;i++){
        normalizeStr(st[i].name);
	printf("| %8s |%20s     |  %.2f  |  %5c   |  %02d-%02d-%02d |\n",st[i].id,st[i].name,st[i].grade,st[i].class,st[i].birthdate.d,st[i].birthdate.m,st[i].birthdate.y);
      }
      printf("========================================================================\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
      case 7:
      on=1;
            printf("Search ID:");
            scanf("%[^\n]%*c",b);
            printf("========================================================================\n");
            printf("|    Id    |           Name          | Grade  |  Class   |    Birth    |\n");
            for (i=0;i<numst;i++){
            if(strstr(st[i].id,b)){
              on=0;
              printf("| %8s |%20s     |  %.2f  |  %5c   |  %02d-%02d-%02d |\n",st[i].id,st[i].name,st[i].grade,st[i].class,st[i].birthdate.d,st[i].birthdate.m,st[i].birthdate.y);
        }
        }
            printf("========================================================================\n");
            if (on) printf("NULL\n");
            printf("\t\t======-Press ENTER to Exist-======");
            while( getchar() != '\n' );
        break;
      case 8:
      printf("Thank you !!!\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
      break;
    default:
      printf("Your choice is not correct !\n Press Enter to try again!\n");
      printf("\t\t======-Press ENTER to Exist-======");
      while( getchar() != '\n' );
    }
  }while(ch!=8);
  return 0;
}
