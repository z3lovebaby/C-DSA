#include<stdio.h>
int isLeapyear(int d);
int getM();
int getY();
int main(){
    int mm,yy;
    printf("Nhap vao cac thong tin duoi day de biet:\n**Thang nhap vao co bao nhieu ngay !\n");
    yy=getY();
    mm=getM();
    if (mm==2){
        if (isLeapyear(yy)){
            printf("Nam nhuan\nThang 2, nam %d co 29 ngay\n",yy);
        }else printf("Khong phai nam nhuan\nThang 2, nam %d co 28 ngay\n",yy);
    }else{
        switch(mm){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:printf("Thang %d,nam %d co 31 ngay !\n",mm,yy);
            break;
            default: printf("Thang %d,nam %d co 30 ngay !\n",mm,yy);
            break;
        }

    }
    return 0;
}
int getY(){
    int y;
    do{
        printf("Nam\\Year(vd 2002):");
        scanf("%d",&y);
        if (y<0) printf("Gia tri nhap vao phai la so duong!\n");
    }while (y<0);
    return y;
}
int getM(){
    int m;
    do{
        printf("Thang\\Month(vd 1):");
        scanf("%d",&m);
        if (m<1||m>12) printf("Thang nhap vao khong hop le!\n");
    }while (m<1||m>12);
    return m;
}
int isLeapyear(int d){
    if (d % 4==0 & d%100!=0 ||d % 400==0)
    return 1;
    else return 0;
}