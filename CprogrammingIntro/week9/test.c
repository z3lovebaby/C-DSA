#include<stdio.h>
int t(int a){
    if (a % 400==0){
        return 1;
    }
    if (a%100==0){
        return 0;
    }
    if (a % 4==0){
        return 1;
    }
}
int main(){
    printf("%d la abc\n",t(2005));
    return 0;
}