#include<stdio.h>
typedef struct test
{
    int a,b,c;
}t;

int main(){
    t a[100];
    int i;
    for(i=0;i<10;i++){
        a[i].a=i;
        a[i].b=i+1;
        a[i].c=i+2;
    }
    for(i=0;i<10;i++){
        printf("a= %d b= %d c= %d\n",a[i].a,a[i].b,a[i].c);
    }
    return 0;
}