#include<stdio.h>
#include<math.h>
#include<string.h>

#define maxSize 30
typedef struct
{
    long ID;
    char name[40];
    int scores[2];
}student;
void Rdata(student *a){
    printf("ID: ");
    scanf("%ld%*c",&a->ID);
    printf("Name of student who has ID %ld : ",a->ID);
    scanf("%[^\n]%*c",a->name);
    do{
        printf("Test's score: ");
        scanf("%d%*c",&a->scores[0]);
        if(a->scores[0]<0||a->scores[0]>10){
            printf("Score must not be <0 and >10\n");
        }
    }while(a->scores[0]<0||a->scores[0]>10);

    do{
        printf("Project's score: ");
        scanf("%d%*c",&a->scores[1]);
        if(a->scores[1]<0||a->scores[1]>10){
            printf("Score must not be <0 and >10\n");
        }
    }while(a->scores[1]<0||a->scores[1]>10);
    printf("\t\tPress ENTER to continue.....");
      while( getchar() != '\n' );
}
void trim_r(char *a){
  int i,size;
  // trim right
  size=strlen(a);
  for(i=size-1;*(a+i)==' ';i--);
  *(a+1+i)='\0';
  size=strlen(a);
  for(i=size-1;*(a+i)!=' ';i--);
  strcpy(a,a+i+1);
  //
}
int main(){
    student st[maxSize],temp;
    long id;
    char aname[40],s1[40],s2[40];
    int ch,n,i,j,count;
    do{
        printf("1. Read data.\n");
        printf("2. Print data.\n");
        printf("3. Search by ID\n");
        printf("4. Search by name.\n");
        printf("5. Count.\n");
        printf("6. Sort by name.\n");
        printf("7. Exist.\n");
        printf("Your choice: ");
        scanf("%d%*c",&ch);
        switch(ch){
            case 1:
                do{
                printf("Enter the number of students, n= ");
                scanf("%d%*c",&n);
                if(n<3||n>9){
                    printf("Must be >2 and <10\n");
                }
                }while(n<3||n>9);
                for (i=0;i<n;i++){
                    Rdata(&st[i]);
                }

            break;
            case 2:
            printf("=======================================================================\n");
            printf("|    ID    |             Name            | Test score | Project score |\n");
            for (i=0;i<n;i++){
            printf("|  %06ld  |    %-25s|     %02d     |      %02d       |\n",st[i].ID,st[i].name,st[i].scores[0],st[i].scores[1]);
            }
            printf("=======================================================================\n");
            printf("\t\tPress ENTER to continue.....");
            while( getchar() != '\n' );
            break;
            case 3:
                printf("Enter an ID: ");
                scanf("%d%*c",&id);
                i=0;
                while (i<n&&id!=-1){
                    if (st[i].ID==id){
                        printf("Name of student who has ID: %ld\n%s\n",st[i].ID,st[i].name);
                        id=-1;
                        break;
                    }
                    i++;
                }
                if (id!=-1){
                    printf("ID not found.\n");
                }
                printf("\t\tPress ENTER to continue.....");
                while( getchar() != '\n' );
            break;
            case 4:
                printf("Enter a name (contains not space): ");
                scanf("%s%*c",aname);
                i=0;
                id=1;
                while (i<n&&id!=-1){
                    if (strstr(st[i].name,aname)){
                        printf("ID of student \" %s \" \n %ld\n",st[i].name,st[i].ID);
                        id=-1;
                        break;
                    }
                    i++;
                }
                if (id!=-1){
                    printf("Name not found.\n");
                }
                printf("\t\tPress ENTER to continue.....");
                while( getchar() != '\n' );
            break;
            case 5:
                count=0;
                for (i=0;i<n;i++){
                    if (st[i].scores[0]>=5&&st[i].scores[1]>=5){
                        count++;
                    }
                }
                printf("Total number of passed student: %d.\n",count);
                printf("\t\tPress ENTER to continue.....");
                while( getchar() != '\n' );
            break;
            case 6:
                for(i=0;i<n-1;i++){
                    for (j=i+1;j<n;j++){
                        strcpy(s1,st[i].name);
                        strcpy(s2,st[j].name);
                        trim_r(s1);
                        trim_r(s2);
                        if(strcmp(s1,s2)>0){
                            temp=st[i];
                            st[i]=st[j];
                            st[j]=temp;
                        }          
                    }
                }
                printf("\t\tPress ENTER to continue.....");
                while( getchar() != '\n' );
            break;
            case 7:
                printf("Thank youuu. See youu!!\n");
                printf("\t\tPress ENTER to continue.....");
                while( getchar() != '\n' );
            break;
            default:
                printf("Your is not exist. Your choice must be from 1-7.\n");
                printf("\t\tPress ENTER to continue.....");
                while( getchar() != '\n' );
        }
    }while(ch!=7);
    return 0;
}