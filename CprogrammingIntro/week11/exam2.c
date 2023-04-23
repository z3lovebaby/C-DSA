#include<stdio.h>
int main(){
  int a,b,c;
  int *ptr;
  printf("a = %d , address: %p\n",a,&ptr);
  printf("a b c: ");
  scanf("%d %d %d",&a,&b,&c);
  ptr=&a;
  printf("a = %d , address: %p\n",*ptr,ptr);
  *ptr+=100;
  printf("a' = %d , address: %p\n",*ptr,ptr);
    ptr=&b;
  printf("b = %d , address: %p\n",*ptr,ptr);
  *ptr+=100;
  printf("b' = %d , address: %p\n",*ptr,ptr);
  ptr=&c;
  printf("c = %d , address: %p\n",*ptr,ptr);
  *ptr+=100;
  printf("c' = %d , address: %p\n",*ptr,ptr);
  return 0;
}
