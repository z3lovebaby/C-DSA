#include<stdio.h>
#include<math.h>
 
int main()
{
    int x,x1,i;
    int a[7]={500000,200000,100000,50000,20000,10000,5000};
    int b[7]={0,0,0,0,0,0,0};
    printf("Nhap so tien: ");
    scanf("%d%*c",&x);
    x1=x;
    i=0;
    while (i<7&x!=0){
        while((x/a[i])>0){
            b[i]++;
            x=x-a[i];
        }
        i++;
    }
    printf("%d can:",x1);
    for (i=0;i<7;i++){
        if (b[i]!=0){
            printf("%d to %d\n",b[i],a[i]);
        }
    }
    return 0;
}