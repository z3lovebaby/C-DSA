#include<stdio.h>
#define maxSize 5
void InputArr(int a){
    int *ptr=a;
    for (int i=0;i<maxSize;i++){
        printf("a[%d] = ",i);
        scanf("%d",ptr+i);
    }
    for (int i=0;i<maxSize;i++){
        printf("a[%d] = %d\t",i,*(ptr+i));
    }
}
void AddArr(int a){
    int *ptr=a;
    for (int i=0;i<maxSize;i++){
        
        
    }
    for (int i=0;i<maxSize;i++){
        printf("a[%d] = %d\t",i,*(ptr+i));
    }
}
int main(){
    int a[maxSize];
    printf("\n");
    FuncArr(a);
    printf("\n");
    return 0;
}