#include<stdio.h>
#include<string.h>
typedef struct
{
    long ID;
    int chapter;
    char content[50];
}Question;

//funct read
void read(Question * a,long i){
    a->ID=1;
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

int main(){
    Question q[100];
    int ch,j,n;
    long i;
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
                }
                //in ra list q
                printf("+======================================================================================+\n");
                printf("|   ID   |   Chapter   |                                Content                        |\n");
                for(i=0;i<n;i++){
                    printf("|   %03ld  |     %02d      | %-50s            |\n",q[i].ID,q[i].chapter,q[i].content);
                }
                printf("+======================================================================================+\n");
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