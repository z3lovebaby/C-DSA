#include<stdio.h>
int main(){
    int n,i;
    int a[n];
    printf("Xau nhi phan n bit, n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        a[i]=0;
        printf("%d",a[i]);
    }
    printf("\n");
    while (1){
        for (i=n-1;i>=0;i--){
            if (a[i]==0){
                a[i]=1;
                for (int j=i+1;j<n;j++){
                    a[j]=0;
                }
                for (i=0;i<n;i++){
                printf("%d",a[i]);
            } 
            printf("\n");
            break;
            }
        }
        // if (a[0]==1) break;
    
    }

    return 0;
}