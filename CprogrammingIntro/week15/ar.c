#include<stdio.h>
int main(){
    int a[]={1,2,3,2,2,2,3,5,6,7,3};
    int i,j,max,t,solan;
    max=0;
    solan=0;
    for (i=0;i<11;i++){
        t=0;
        for(j=0;j<11;j++){
            if(a[i]==a[j]&&a[j]!=-1){
                t++;
                if(i!=j){a[j]=-1;}
            }
        }
    if(t>solan){
        max=a[i];
        solan=t;
        a[i]=-1;
    }
    }
    printf("Max %d. So lan %d.\n",max,solan);
    return 0;
}
