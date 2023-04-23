#include<iostream>
using namespace std;
typedef struct doublis
{
    char data;
    doublis *pre,*next;
}dl;

int main(){
    dl *node1,*node2,*node3;
    node1=new dl;
    node2=new dl;
    node3=new dl;
    node1->data='a';
    node2->data='b';
    node3->data='c';
    node1->pre=NULL;
    node1->next=node2;
    node2->pre=node1;
    node2->next=node3;
    node3->pre=node2;
    node3->next=NULL;
    dl *temp;
    for(temp=node1;temp!=NULL;temp=temp->next)
    printf("%c \n",temp->data);
    return 0;
}