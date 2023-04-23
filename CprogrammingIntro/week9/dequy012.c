#include<stdio.h>
int sub(int n){ 
    if (n==2) return 7;
    if (n==1) return 3;
    return 2*sub(n-1)+sub(n-2);
}
int main(){

   printf("%d\n",sub(5));


    return 0;
}