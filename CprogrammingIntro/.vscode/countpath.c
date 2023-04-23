#include<stdio.h>
int countpath(int i,int j,int D, int C){
    if(i==D||j==C)return 1;
    else return countpath(i+1,j,D,C)+countpath(i,j+1,D,C);
}
int main(){
    printf("%d\n",countpath(3,3,4,4));
    return 0;
}