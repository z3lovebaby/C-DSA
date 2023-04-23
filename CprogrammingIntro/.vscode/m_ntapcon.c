#include<stdio.h>
#include <stdbool.h>
int n=9,m=4,count=0;
int a[100];
void xuat(int k){
    int i;
    count++;
    printf("Xau %d: ",count);
    for(i=0;i<m;i++){
        printf("%d",a[i+1]);
    }
    printf("\n");
}
void try(int k){
    int i;
    for(i=a[k-1]+1;i<n-m+k;i++){
        a[k]=i;
        if(k==m) xuat(m);
        else try(k+1);
    }
}

int main(){
    a[0]=0;
    try(1);
    return 0;
}