#include<iostream>
using namespace std;
typedef struct nut
{
    int data;
    nut *next;
}node;

int main(){
    node *a[100];
    int n,i;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]= new node;
    }
    for(i=0;i<n;i++){
        a[i]->data=i+1;
        if(i!=n-1)
        a[i]->next=a[i+1];
        else a[i]->next=NULL;

    }
    for(i=0;i<n;i++){
        printf("%d \n",a[i]->data);
    }
    printf("Done..\n");
    return 0;
}