#include<stdio.h>
typedef struct
{
    long ID;
    char name[40];
    int scores[2];
}student;

int main(){
    student st[100];
    int ch,n,i,count;
    do{
        printf("STUDENT PROGRAN\n");
        printf("1. Read data.\n");
        printf("2. Print data.\n");
        printf("3. Search by ID.\n");
        printf("4. Search by Name.\n");
        printf("5. Count.\n");
        printf("6. Sort by name.\n");
        printf("7. Exist.\n");
        printf("======================================\n");
        printf("Your choice: ");
        scanf("%d%*c",&ch);
        switch(ch){
            case 1:
                do{
                   printf("Number of student: ");
                   scanf("%d%*c",&n);
                   if(n<2||n>10) printf("Must be >2 and <10\n"); 
                }while((n<2||n>10));
            for (i=0;i<n;i++){
                printf("Student no %d\n",i+1);
                printf("Your name: ");
                scanf("%[^\n]%*c",st[i].name);
                printf("Your ID: ");
                scanf("%ld%*c",&st[i].ID);
                do{
                  printf("Your score test: ");
                scanf("%d%*c",&st[i].scores[0]);
                if (st[i].scores[0]<0) printf("Must be >0\n");
                }while(st[i].scores[0]<0);
                do{
                  printf("Your score project: ");
                scanf("%d%*c",&st[i].scores[1]);
                if (st[i].scores[1]<0) printf("Must be >0\n");
                }while(st[i].scores[1]<0);
            }
            break;
            case 2:
            for(i=0;i<n;i++){
                printf("%6ld    %26s    %2d    %2d\n",st[i].ID,st[i].name,st[i].scores[0],st[i].scores[1]);
            }
            
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            count=0;
            for(i=0;i<n;i++){
              if (st[i].scores[0]>=5 && st[i].scores[1]>=5){
                count++;
              }
            }
            printf("Total student passed: %d\n",count);
            break;
            case 6:
            break;
            case 7:
            printf("Thanks you ! See you again!\n");
            break;
            default:
            printf("Your choice doesn't exist.\n");
            break;
        }
        }while(ch!=7);
    return 0;
}