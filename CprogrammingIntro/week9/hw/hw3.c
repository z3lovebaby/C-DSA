#include<stdio.h>
double cencius(double F);
void tbF2C(double l,double h,double s);
int main(){
    double F,l,h,s;
    printf("Do F:");
    scanf("%lf",&F);
    printf("%.1lf F = %.1lf C\n",F,cencius(F));
    printf("Low value: ");
    scanf("%lf",&l);
    do{
    printf("High value: ");
    scanf("%lf",&h);
    if (h<l) printf("Have to greater than Low value\n");
    }while(h<l);
    printf("Step: ");
    scanf("%lf",&s);
    tbF2C(l,h,s);
    return 0;
}
double cencius(double F){
    return 5.0/9*(F-32);
}
void tbF2C(double l,double h,double s){
    printf("******************************\n");
    printf("*      F              C      *\n");
    while(l<=h){
        printf("*%8.1lf %16.1lf   *\n",l,cencius(l));
        l+=s;
    }
    printf("******************************\n");
}
