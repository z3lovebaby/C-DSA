#include<stdio.h>
#define maxSize 15
int getAo(){
    int ao;
    do{
      printf("So ao cua cau thu (datatest 0-%d): ",maxSize-1);
        scanf("%d",&ao);
        if (ao<0||ao>maxSize-1) printf("So ao nhap vao khong hop le!\n");
    }while (ao<0||ao>maxSize-1);
    return ao;
}
double NHAPDIEM(int j,int i){
    double diem;
    do{
        printf("Diem cua chuyen gia %d cho cau thu so %d\n So diem (0.0-10.0): ",j,i);
        scanf("%lf%*c",&diem);
        if (diem<0||diem>10) printf("So ao nhap vao khong hop le!\n");
    }while (diem<0||diem>10);
    return diem;
}
double ROUND(double a){
    if (a-(int)(a)<0.25) return (int)(a);
    else if (a-(int)(a)>0.75) return (int)(a)+1;
    else return (int)(a)+0.5;
}
double check(double a1[],double a2[]){
    double compare=0;
    for (int i=0;i<maxSize;i++){
        if (a1[i]!=-1){
             compare=compare+a1[i]-a2[i];
        }
           
        }
    return compare;
}
int main(){
    int ch,i,d,count;
    double a1[maxSize],a2[maxSize];
    for (d=0;d<maxSize;d++){
        a1[d]=a2[d]=-1;
    }
    do{
        printf("\t\tCHAM DIEM CAU THU SAU TRAN DAU\n");
        printf("\t\t1. Nhap du lieu (Cau thu,Diem so).\n");
        printf("\t\t2. In ra du lieu.\n");
        printf("\t\t3. Danh gia nhan xet cua nguoi cham !\n");
        printf("\t\t4. Thoat.\n");
        printf("*********************\n\t\tLua chon cua ban: ");
        scanf("%d%*c",&ch);
        switch(ch){
            case 1:
            i=getAo();
            a1[i]=NHAPDIEM(1,i);
            a2[i]=NHAPDIEM(2,i);
            printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
            break;
            case 2:
            count=0;
            for (d=0;d<maxSize;d++){
                if (a1[d]!=-1){
                    printf("Cau thu ao so %d: %.1lf diem \t",d,ROUND(0.5*(a1[d]+a2[d])));
                    count++;
                    if (count % 2==0)printf("\n");
                }
            }
            printf("\n\nThanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
            break;
            case 3:
            if (check(a1,a2)>0){
                printf("Chuyen gia 2 la nguoi khat khe hon !\nChuyen gia 1 la nguoi cho diem de dai hon!\n");
            }else if (check(a1,a2)<0){
            printf("Chuyen gia 1 la nguoi khat khe hon !\nChuyen gia 2 la nguoi cho diem de dai hon!\n");}
            else printf("That kho tinnn!Xet tren ca 5 cau thu 2 chuyen gia danh gia gan nhu la giong nhau!\n");
            printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
            break;
            case 4: 
            printf("Cam on !!\n");
            break;
            default: printf("Lua chon khong hop le !\nNhap lai !!!!\n");
            printf("Press ENTER to Continue ");
            while( getchar() != '\n' );
            break;
        }

    }while (ch!=4);
    return 0;
}
