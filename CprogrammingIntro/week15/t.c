#include<stdio.h>
#include<string.h>
typedef struct{
    unsigned int x,y,z;
}date;
int checky(int x){
    if(x % 4 ==0&&x%100!=0) return 1;
    return 0;
}
void getdate(int *x,int *y,int *z){
    do{
        printf("Year: ");
        scanf("%d%*c",x);
        if(*x<0||*x>2022)printf("Invalid. Try again.\n");
    }while(*x<0||*x>2022);
    do{
        printf("Month: ");
        scanf("%d%*c",y);
        if(*y<1||*y>12)printf("Invalid. Try again.\n");
    }while(*y<1||*y>12);
    *z=0;
    while(*z==0){
        printf("Day: ");
        scanf("%d%*c",z);
        switch(*y){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(*z<0||*z>31)
                {printf("Invalid.Try again. 1-31 !\n");
                *z=0;}
                break;
            case 2:
                if(checky(*x)&&(*z<0||*z>29)){
                    printf("Invalid. 1-29.\n");
                    *z=0;
                }
                 
                if(!checky(*x)&&(*z<0||*z>28)){
                printf("Invalid. 1-28\n");
                *z=0;}
                break;
            default:
                if(*z<0||*z>30){printf("Invalid.Try again. 1-30 !\n");
                *z=0;}
                break;
        }

    }
}
int main(){
    date a;
    getdate(&a.x,&a.y,&a.z);
    printf("%d %d %d\n",a.x,a.y,a.z);
    return 0;
}