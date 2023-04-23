#include<stdio.h>
#include<string.h>

typedef struct {
    int ID;
    char na[4];
    char name[30];
    double R[3];
}althlete;

void nhap(althlete *a, int *check){
    do{
        printf("ID: ");
        scanf("%d%*c",&a->ID);
        if(a->ID<0) printf("Must >0\n");
        if(*(check+a->ID)) printf("Invalidation.The ID is existed.\n");
    }while(a->ID<0||*(check+a->ID));
    *(check+a->ID)=1;
    printf("Nation(LLL): ");
    scanf("%[^\n]%*c",a->na);
    printf("Name: ");
    scanf("%[^\n]%*c",a->name);
}
void nhapdiem(althlete *a,int i){
    printf("Van dong vien %s:\n",a->name);
    do{
        printf("R%d: ",i+1);
        scanf("%lf%*c",&a->R[i]);
        if(a->R[i]<0||a->R[i]>20)printf("Invalid data.\n");
    }while(a->R[i]<0||a->R[i]>20);
    
}
int main(){
    althlete vdv[20],temp;
    int ch,ch2,i,j,n;
    int check[1000]={0},cheme[6]={0};
    char fin[20];
    do{
        printf("1. Nhap thong tin truoc khi thi dau.\n");
        printf("2. In thong tin.\n");
        printf("3. Thi dau.\n");
        printf("4. Tim kiem.\n");
        printf("5. In ket qua.\n");
        printf("6. Thoat.\n");
        printf("=======================================\n");
        printf("Your choice: ");
        scanf("%d%*c",&ch);

        switch(ch){
            case 1:
                if(!cheme[0]){
                    do{
                    printf("Nhap so luong dong vien(<=20): ");
                    scanf("%d%*c",&n);
                    if(n<1||n>20){
                        printf("Must be >0 and <=20.\n");
                    }
                }while(n<1||n>20);
                    for (i=0;i<n;i++){
                        printf("Khai bao cho vdv %d:\n",i+1);
                        nhap(&vdv[i],check);
                    }
                }else{
                    printf("You only allow use fuct 1 once time.\n");
                    printf("Enter to continue..\n");
                    while(getchar()!='\n');
                    break;
                }
                cheme[0]=1;
            break;
            case 2:
                if(cheme[0]){
                    printf("LIST\n");
                    printf("+=========================================================================================+\n");
                    printf("|  ID  |   Nation  |              Name                |   R1   |   R2   |   R3   |   FR   |\n");
                    for (i=0;i<n;i++){
                    printf("| %04d |  %7s  |  %-30s  | %5s  | %5s  | %5s  | %5s  |\n",vdv[i].ID,vdv[i].na,vdv[i].name," "," "," "," ");
                    }
                    printf("+=========================================================================================+\n");

                }else{
                    printf("Ban phai nhap vao thong tin truoc.\nEnter to back menu.\n");
                    while(getchar()!='\n');
                    break;
                }
            break;
            case 3:
                if(cheme[0]){
                        printf("Lan %d.\n",1);
                        for(i=0;i<n;i++){
                            nhapdiem(&vdv[i],0);
                        }
                        printf("+=========================================================================================+\n");
                        printf("|  ID  |   Nation  |              Name                |   R1   |   R2   |   R3   |   FR   |\n");
                        for (i=0;i<n;i++){
                        printf("| %04d |  %7s  |  %-30s  |%5.2f   | %5s  | %5s  | %5s  |\n",vdv[i].ID,vdv[i].na,vdv[i].name,vdv[i].R[0],"","","");
                        }
                        printf("+=========================================================================================+\n");

                        printf("Lan %d.\n",2);
                        for(i=0;i<n;i++){
                            nhapdiem(&vdv[i],1);
                        }
                        printf("+=========================================================================================+\n");
                        printf("|  ID  |   Nation  |              Name                |   R1   |   R2   |   R3   |   FR   |\n");
                        for (i=0;i<n;i++){
                        printf("| %04d |  %7s  |  %-30s  | %5.2f  | %5.2f  | %5s  |%5s   |\n",vdv[i].ID,vdv[i].na,vdv[i].name,vdv[i].R[0],vdv[i].R[1],"","");
                        }
                        printf("+=========================================================================================+\n");

                        printf("Lan %d.\n",3);
                        for(i=0;i<n;i++){
                            nhapdiem(&vdv[i],2);
                        }
                        printf("+=========================================================================================+\n");
                        printf("|  ID  |   Nation  |              Name                |   R1   |   R2   |   R3   |   FR   |\n");
                        for (i=0;i<n;i++){
                        printf("| %04d |  %7s  |  %-30s  | %5.2f  | %5.2f  | %5.2f  | %5.2f  |\n",vdv[i].ID,vdv[i].na,vdv[i].name,vdv[i].R[0],vdv[i].R[1],vdv[i].R[2],1.0/3*(vdv[i].R[0]+vdv[i].R[1]+vdv[i].R[2]));
                        }
                        printf("+=========================================================================================+\n");
                        cheme[2]=1;
                }else{
                    printf("Phai nhap thong tin truoc.\n");
                    break;
                }
            break;
            case 4:
                if(cheme[2]){
                do{
                    printf("4.1<1>. Tim kiem theo QG.\n");
                    printf("4.2<2>. Tim kiem theo ten.\n");
                    printf("4.3<3>. Back to main menu.\n");
                    printf("Your choice: ");
                    scanf("%d%*c",&ch2);
                    switch(ch2){
                        case 1:
                            printf("Nhap ten quoc gia muon tim kiem <LLL>: ");
                            scanf("%[^\n]%*c",fin);
                            printf("+=========================================================================================+\n");
                            printf("|  ID  |   Nation  |              Name                |   R1   |   R2   |   R3   |   FR   |\n");
                            for(i=0;i<n;i++){
                                if(strstr(vdv[i].na,fin)){
                                    printf("| %04d |  %7s  |  %-30s  | %5.2f  | %5.2f  | %5.2f  | %5.2f  |\n",vdv[i].ID,vdv[i].na,vdv[i].name,vdv[i].R[0],vdv[i].R[1],vdv[i].R[2],1.0/3*(vdv[i].R[0]+vdv[i].R[1]+vdv[i].R[2]));
                                }
                            }
                            printf("+=========================================================================================+\n");
                            
                        break;
                        case 2:
                            printf("Nhap ten cua vdv <Only Name>: ");
                            scanf("%[^\n]%*c",fin);
                            printf("+=========================================================================================+\n");
                            printf("|  ID  |   Nation  |              Name                |   R1   |   R2   |   R3   |   FR   |\n");
                            for(i=0;i<n;i++){
                                if(strstr(vdv[i].name,fin)){
                                    printf("| %04d |  %7s  |  %-30s  | %5.2f  | %5.2f  | %5.2f  | %5.2f  |\n",vdv[i].ID,vdv[i].na,vdv[i].name,vdv[i].R[0],vdv[i].R[1],vdv[i].R[2],1.0/3*(vdv[i].R[0]+vdv[i].R[1]+vdv[i].R[2]));
                                }
                            }
                            printf("+=========================================================================================+\n");
                            
                        break;
                        case 3:
                        break;
                        default:
                            printf("Invalid choice.\nEnter to try again.\n");
                            while(getchar()!='\n');
                            break;
                    }

                }while(ch2!=3);
                }else{
                    printf("Func 3 is done before use funct 4.\nEnter to back main menu.\n");
                    while(getchar()!='\n');
                    break;
                }
            break;
            case 5:
            if(cheme[2]){
                for (i=0;i<n-1;i++){
                    for(j=i;j<n;j++){
                        if(vdv[i].R[0]+vdv[i].R[1]+vdv[i].R[2]<vdv[j].R[0]+vdv[j].R[1]+vdv[j].R[2]){
                            temp=vdv[i];
                            vdv[i]=vdv[j];
                            vdv[j]=temp;
                        }
                    }
                }
                printf("+=========================================================================================+\n");
                printf("|  ID  |   Nation  |              Name                |   R1   |   R2   |   R3   |   FR   |\n");
                for (i=0;i<n;i++){
                printf("| %04d |  %7s  |  %-30s  | %5.2f  | %5.2f  | %5.2f  | %5.2f  |\n",vdv[i].ID,vdv[i].na,vdv[i].name,vdv[i].R[0],vdv[i].R[1],vdv[i].R[2],1.0/3*(vdv[i].R[0]+vdv[i].R[1]+vdv[i].R[2]));
                }
                printf("+=========================================================================================+\n");
            }else{
                    printf("Func 3 is done before use funct 5.\nEnter to back main menu.\n");
                    while(getchar()!='\n');
                    break;
            }       
            break;
            case 6:
                printf("Succefful. Enter to finish.\n");
                while(getchar()!='\n');
            break;
            default:
                printf("Invalid choice. Must be 1-6.\n");
                printf("Enter to back menu.\n");
                while(getchar()!='\n');
            break;
        }//end switch
    }while(ch!=6);
    return 0;
}