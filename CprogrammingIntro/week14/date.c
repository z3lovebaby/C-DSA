// #include<stdio.h>
// typedef struct datstr
// {
//   int dd,mm,yy;
// } date;
// void getdata(date *x){
//   int chday;
//   do{
//     printf("Year:");
//     scanf("%d%*c",&x->yy);
//     if(x->yy<0){
//       printf("Year after CN, >0!\n");
//     }
//   }while(x->yy<0);

//   do{
//     printf("Month:");
//     scanf("%d%*c",&x->mm);
//     if(x->mm<1||x->mm>12){
//       printf("Error!\n");
//     }
//   }while(x->mm<1||x->mm>12);
//   if (x->mm==2){
//     chday=28;
//   }else chday=31;
//   do{
//     printf("Day:");
//     scanf("%d%*c",&x->dd);
//     if(x->dd<1||x->dd>chday){
//       printf("Error!\n");
//     }
//   }while(x->dd<1||x->dd>chday);

// }
// int cmpdate(date x,date y){
//   if (x.yy<y.yy)
//     return -1;
//   else if(x.yy<y.yy)return 1;
//   else{
//     if (x.mm<y.mm){
//       return -1;
//     }else if(x.mm<y.mm){return 1;}
//     else{
//       if (x.dd<y.dd){
// 	return -1;
//       }else if(x.dd<y.dd){return 1;}
//     }
//   }

// }
// int main(){
//   date x,y;
//   getdata(&x);
//   getdata(&y);
//   printf("%d/%d/%d\n",x.dd,x.mm,x.yy);
//   printf("%d/%d/%d\n",y.dd,y.mm,y.yy);
//   if(cmpdate(x,y)>0){
//     printf("%d/%d/%d after %d/%d/%d\n",x.dd,x.mm,x.yy,y.dd,y.mm,y.yy);
//   }else if(cmpdate(x,y)<0){
//     printf("%d/%d/%d before %d/%d/%d\n",x.dd,x.mm,x.yy,y.dd,y.mm,y.yy);
//     }else{
//     printf("Same\n");
//   }
//   return 0;
// }
#include<stdio.h>
typedef struct get
{
  int a,b;
}dbi;
int main(){
  // dbi *x=&x;
  dbi *t;
  int m,n;
  m=3;
  n=5;
  t->a=m;
  t->b=n;
  printf("%d %d %p %p\n",(t->a),(t->b),t->a,t->b);
  return 0;
}

