#include<stdio.h>
#include<string.h>
int f(int *x){
    int *p=x+2;
    *p=100;
    return x[0]+x[2];
}
int main(){
    // char *s="hello"+"word";
    int x=9,y=10,z=9;
    int a[]={1,2,[10]=10};
    char s[]={'1','2','\0','2','\0'};

    printf("%d",strlen(s));
    printf("Hello"
    "world!");
}