#include<stdio.h>
#define max 4
int main(){
    int a[max];
    int sum,count,i,j;
    int m=0;
    count=0;
    sum=0;
    for (i=0;i<max;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<max;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for (i=1;i<=max;i++){
        while (i+m<=max){
        for (j=0;j<i;j++){
            sum+=a[m];
            m=m+1;
            }
            m=m-i+1;
            if (sum!=0 && sum % 2 ==0){
                count++;
                printf("%d\n",count);
            }
            sum=0;
        }
        m=0;
    }
    return 0;
}