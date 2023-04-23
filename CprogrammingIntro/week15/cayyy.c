#include<stdio.h>
#include<math.h>
typedef struct{
    int id;
    char name[30];
    int x,y;
    int r;
}station;

void nhap(station *l,int i,int *a){
    printf("Nhap du lieu cho tram %d.\n",i+1);
    do{
        printf("ID: ");
        scanf("%d%*c",&l->id);
        if(l->id<0)printf("Must be >0.Try again.\n");
        if(*(a+l->id))printf("ID is existed..\n Let try with other ID.\n");
    }while(l->id<0||a[l->id]);
    *(a+l->id)=1;//danh dau ID da ton tai.
    printf("Ten cua tram truong: ");
    scanf("%[^\n]%*c",l->name);
    printf("Toa do x: ");
    scanf("%d%*c",&l->x);
    printf("Toa do y: ");
    scanf("%d%*c",&l->y);
    do{
        printf("Ban kinh r <1-100>: ");
        scanf("%d%*c",&l->r);
        if((l->r)<1||(l->r)>100){
            printf("Must be belong to 1-100.!Try again.\n");
        }
    }while((l->r)<1||(l->r)>100);
}
float kc(int a1,int b1,int a2,int b2){
    return sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
}
int main(){
    station list[50],temp;
    int ch,i,j,n,m;
    int a[1000]={0};
    do{
        printf("1. Nhap moi tram thu.\n");
        printf("2. Bo sung tram phat.\n");
        printf("3. Xem danh sach tram.\n");
        printf("4. Tinh toan khoang cach tram.\n");
        printf("5. Advanced.\n");
        printf("6. Thoat.\n");
        printf("=========================================\n");
        printf("Your choice: ");
        scanf("%d%*c",&ch);
        switch(ch){
            case 1:
                do{
                    printf("Nhap vao so tram <1-50>: ");
                    scanf("%d%*c",&n);
                    if (n<1||n>50){
                        printf("Must be belong to range: 1-50 !\n");
                    } 
                }while(n<1||n>50);
                for(i=0;i<n;i++){
                    nhap(&list[i],i,a);
                    printf("Enter to continue...\n");
                    while(getchar()!='\n');
                }
            break;
            case 2:
                do{
                    printf("Nhap vao so tram muon them: ");
                    scanf("%d%*c",&m);
                    if(m<0) printf("Must be <0 !\n");
                    if(n+m>50)printf("Too big..It overcame rang 1-50. Let try again! <Hint: <%d>>.\n",50-n);
                }while(m<0||n+m>50);
                for (i=n;i<m+n;i++){
                    nhap(&list[i],i,a);
                }
                n=n+m; 
                printf("Enter to continue...\n");
                while(getchar()!='\n');
            break;
            case 3:
                printf("==================DANH SACH TRAM===================\n");
                
                    printf("+===============================================================================+\n");
                    printf("|  ID   |              Ho ten              |      Toa do     |     Ban Kinh     |\n");
                    printf("+===============================================================================+\n");
                for (i=0;i<n;i++){
                    printf("| %05d |    %-30s|    (%2d ; %2d)    |       %03d        |\n",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r);    
                }
                    printf("+===============================================================================+\n");
                    printf("Enter to continue...\n");
                    while(getchar()!='\n');
            break;
            case 4:
            printf("==================DANH SACH TRAM===================\n");
                
                    printf("+===================================================================================================+\n");
                    printf("|  ID   |              Ho ten              |      Toa do     |     Ban Kinh     |    Khoang cach    |\n");
                    printf("+===================================================================================================+\n");
                for (i=0;i<n;i++){
                    printf("| %05d |    %-30s|    (%2d ; %2d)    |       %03d        |        %6.2f     |\n",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r,kc(list[i].x,list[i].y,0,0)); 
                }   
                    printf("+===================================================================================================+\n");
            printf("Enter to sort follow by khoang cach giam dan.");
            while(getchar()!='\n');
                for(i=0;i<n-1;i++){
                    for (j=i+1;j<n;j++){
                        if(kc(list[i].x,list[i].y,0,0)<kc(list[j].x,list[j].y,0,0)){
                            temp=list[i];
                            list[i]=list[j];
                            list[j]=temp;
                        }
                    }
                }
            printf("==================AFTER SORTING===================\n");
                
                    printf("+===================================================================================================+\n");
                    printf("|  ID   |              Ho ten              |      Toa do     |     Ban Kinh     |    Khoang cach    |\n");
                    printf("+===================================================================================================+\n");
                for (i=0;i<n;i++){
                    printf("| %05d |    %-30s|    (%2d ; %2d)    |       %03d        |        %6.2f     |\n",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r,kc(list[i].x,list[i].y,0,0));    
                    printf("+===================================================================================================+\n");
                }
                printf("Enter to continue...\n");
                while(getchar()!='\n');
            break;
            case 5:
            break;
            case 6:
            printf("Thank youuu ! Seee you again.\n");
            printf("Enter to continue...\n");
            while(getchar()!='\n');
            break;
            default:
            printf("Invalid choice..\n");
            printf("Enter to try again.\n");
            while (getchar()!='\n');
            break;
        }
    }while (ch!=6);
    return 0;
}