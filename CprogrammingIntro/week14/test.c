#include<stdio.h>
#define maxS 15
int main(){
    int a[maxS][2];
    
    int n,max,i,j,count;
    max=0;
    printf("Nhap so lg phan tu cua mang: ");
    scanf("%d%*c",&n);
    for(i=0;i<n;i++){
        printf("a[%d] = ",i+1);
        scanf("%d%*c",&a[i][0]);
        a[i][1]=0;
    }
    for (i=0;i<n;i++){
        count=0;
        for (j=0;j<n;j++){
            if(a[i][0]==a[j][0]){
                a[i][1]++;
            }
        }
    }
    max=a[0][1];
    for (i=1;i<n;i++){
        if (a[i][1]>max) max=a[i][1];
    }
    for (i=0;i<n;i++){
        if (max==a[i][1]){
            printf("a[%d] = %d xuat hie nh nhat.\n",i+1,a[i][0]);
            return 0;
        }
    }
    return 0;
}