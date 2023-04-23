#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxSize 10
int main(){
    int a[maxSize];
    srand((int)time(0));
    for (int i=0;i<maxSize;i++){
    a[i] = rand()%10+1;
  }
    sort(a);
    return 0;
}
void sort(int a[]){
    int tmp;
    for (int i=0;i<maxSize-1;i++){
        for (int j=i;j<maxSize;j++){
            if (a[i]<a[j]){
                tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
    }
    for (int i=0;i<maxSize;i++){
        printf("%5d",a[i]);
    }
}