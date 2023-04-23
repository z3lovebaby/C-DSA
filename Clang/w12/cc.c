#include<stdio.h>
int *max(int *a,int *b){
    if (*a>*b) return a;
    else return b;
}
int main(){
    int a=3,b=5;
    // int *ptr;
    // ptr=max(&a,&b);
    printf("Adr of max val: %p\n Value:%d",&(*max(&a,&b)),*max(&a,&b));
    return 0;
}