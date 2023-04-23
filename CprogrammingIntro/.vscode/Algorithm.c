#include<stdio.h>
int a[]={1,3,5,6,7,8,9,11,20,21,25,27};
int key=11;
int binary_S(int a[],int low, int high,int key){
    int mid;
    if(low>high) return 0;
    else{
        mid=(low+high)/2;
        if(a[mid]==key) return 1;
        else if(a[mid]<key) return binary_S(a,mid+1,high,key);
        else return binary_S(a,low,mid-1,key);
        
    }
}
char s[]="abcdefghthgfedcbx";
int palindrome(char s[],int st,int ed){
    if(st>=ed) return 1;
    if(s[st]!=s[ed]) return 0;
    else return palindrome(s,st+1,ed-1);
}
int size=7;
int list[]={1,2,3,4,5,6,7};
int prod(int list[],int i){
    if(i==size-1)return list[size-1];
    else return list[i]*prod(list,i+1);
}
// C(n,k)=C(n-1,k-1)+C(n-1,k);
int C(int n,int k){
    if(k==0||k==n)return 1;
    else return C(n-1,k-1)+C(n-1,k);
}
int check[100][100]={-1};
long long int C_conho(int n,int k){
    if(k==0||k==n)return 1;
    if(check[n][k]>0)return check[n][k];
    else {
        check[n][k]=C_conho(n-1,k-1)+C(n-1,k);
        return check[n][k];
    }
}
int n=3;
int b[100];
int count=0;
void xuat(int k){
    int i;
    count++;
    printf("Xau %d: ",count);
    for(i=0;i<n;i++){
        printf("%d",b[i]);
    }
    printf("\n");
}


void tryk(int k){
    int i;
    for (i=0;i<2;i++){
        b[k]=i;
        if(k==n-1) xuat(n-1);
        else tryk(k+1);
    }
}
int checkfi[100]={-1};
long long int fibo(int k){
    if(k==0) return 0;
    if(k<2)return 1;
    if(checkfi[k]>0) return checkfi[k];
    else{
        checkfi[k]=fibo(k-1)+fibo(k-2);
        return checkfi[k];
    }
    }
int main(){
    // printf("%d\n",binary_S(a,0,11,key));
    printf("%d\n",palindrome(s,0,16));
    // printf("%d\n",prod(list,0));
    // printf("%d\n",C(15,5));
    // printf("%lld\n",C_conho(30,10));
    tryk(0);
    printf("%d\n",fibo(7));
    return 0;
}
////////////////////////////////
// 1
// 1
// 2
// 3
// 5
// 8
// 13