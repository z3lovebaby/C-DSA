#include<stdio.h>
#include <stdbool.h>
int n=5;
int a[100];
void xuat(int k){
    int i;
    for(i=1;i<=n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}
bool check(int j,int k){
    int i;
    for(i=1;i<k;i++){
        if(a[i]==j) return false;
    }
    return true;
}
void hoanvi(int k){
    int i;
    for(i=1;i<=n;i++){
        if(check(i,k)){
            a[k]=i;
            if(k==n) xuat(n);else hoanvi(k+1);
        }
    }
}
int main(){
    a[1]=0;
    hoanvi(1);
    return 0;
}