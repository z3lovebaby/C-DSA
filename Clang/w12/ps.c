#include<stdio.h>
int gcd(int a, int b){
    while (a*b != 0){ 
        if (a > b){
            a %= b; // 
        }else{
            b %= a;
        }
    }
    return a + b; // 
}
typedef struct fraction {
    int ts;
    int ms;
} fra;
void readfra(fra *a){
    printf("TS:");
    scanf("%d",&(a->ts));
    printf("MS:");
    scanf("%d",&(a->ms));
}
void OutFrac(fra a){
    printf("%.1d/%.1d",(a.ts),(a.ms));
}
void sum(fra a,fra b){
    fra kq;
    int c;
    kq.ts = a.ts*b.ms + b.ts*a.ms;
    kq.ms=a.ms*b.ms;
    c=gcd(kq.ts,kq.ms);
    kq.ts/=c;
    kq.ms/=c;
    printf("\nSum\n");
    OutFrac(kq);
}
void sub(fra a,fra b){
    fra kq;
    int c;
    kq.ts = a.ts*b.ms - b.ts*a.ms;
    kq.ms=a.ms*b.ms;
    c=gcd(kq.ts,kq.ms);
    kq.ts/=c;
    kq.ms/=c;
    printf("\nMinus\n");
    OutFrac(kq);
}
void mul(fra a,fra b){
    fra kq;
    int c;
    kq.ts=a.ts*b.ts;
    kq.ms=a.ms*b.ms;
    c=gcd(kq.ts,kq.ms);
    kq.ts/=c;
    kq.ms/=c;

    printf("\nMul\n");
    OutFrac(kq);
}
void dev(fra a,fra b){
     fra kq;
     int c;
    kq.ts=a.ts*b.ms;
    kq.ms=a.ms*b.ts;
    c=gcd(kq.ts,kq.ms);
    kq.ts/=c;
    kq.ms/=c;
    printf("\nDivide\n");
    OutFrac(kq);
}
int main(){
    fra a,b,kq;
    // printf("TS:");
    // scanf("%f",&a.ts);
    // printf("MS:");
    // scanf("%f",&a.ms);
    // //
    // printf("%.2f/%.2f\n",(a.ts),(a.ms));//
    // //
    // printf("TS:");
    // scanf("%f",&b.ts);
    // printf("MS:");
    // scanf("%f",&b.ms);
    // //
    // printf("%.2f/%.2f\n",(b.ts),(b.ms));
    // //
    readfra(&a);
    readfra(&b);
    sum(a,b);
    sub(a,b);
    mul(a,b);
    dev(a,b);
    return 0;
}