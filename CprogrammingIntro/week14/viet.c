#include<stdio.h>
typedef struct
{
    long ID;
    char name[40];
    int scores[2];
}student;

int main(){
    int ch,n;
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
                printf("Read data processing\n");
                do{
                   printf("Number of student: ");
                   scanf("%d%*c",&n);
                   if(n<0||n>10) printf("Must be >2 and <10\n"); 
                }
                

            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            printf("Thanks you ! See you again!\n");
            break;
            default:
            printf("Your choice doesn't exist.\n");
        }
    }while(ch!=7);
    return 0;
}