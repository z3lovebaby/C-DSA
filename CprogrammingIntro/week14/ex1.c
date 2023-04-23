// #include<stdio.h>
// #include<string.h>
// #define maxL 50
// int main(){
//     char a[5][maxL],b[maxL];
//     int i,count,ch;
//     do{
//         printf("1. Nhap product\n");
//         printf("2. Search.\n");
//         printf("3. Thoat.\n");
//         printf("Your choice:");
//         scanf("%d%*c",&ch);
//         switch(ch){
//             case 1:
//                 for (i=0;i<3;i++){
//                 printf("Product %d:",i+1);
//                 scanf("%[^\n]%*c",a[i]);
//         }
//         break;
//         case 2:
//             printf("Search:");
//             scanf("%[^\n]%*c",b);
//             for (i=0;i<3;i++){
//             if(strstr(a[i],b)){
//             printf("%s\n",a[i]);
//         }
//         }
//         break;
//         case 3:
//         printf("Thank!\n");
//         break;
//         default:
//         printf("Error!\n");
//         break;
//         }//end sw
//     }while(ch!=3);

//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// #define maxL 50
// int main(){
//     char a[maxL]="123456789";
//     char *to;
//     to=strdup(a+2);
//     printf("Strndum(a+2):%s\n",to);
//     return 0;
// }
#include<stdio.h>
typedef struct Wrec
{
  float rainf,ht,lt,av;
} wet;

int main(){
  wet month[12];
  float totalr,avrr;
  int i;
  totalr=avrr=0;
  printf("Nhap lieu:\n");
  for(i=0;i<12;i++){
    printf("Thang %d:\n",i+1);
    printf("Rainfall:");
    scanf("%lf%*c",&(month[i].rainf));
    totalr+=month[i].rainf;
    do{
      printf("High temp:");
      scanf("%lf%*c",&(month[i].ht));
      if(month[i].ht<-40||month[i].ht>50){
	printf("Error!\n");
      }
    }while(month[i].ht<-40||month[i].ht>50);
    //
    do{
      printf("Low temp:");
      scanf("%lf%*c",&(month[i].lt));
      if(month[i].ht<-40||month[i].lt>50){
	printf("Error!\n");
      }
    }while(month[i].lt<-40||month[i].lt>50);
  }
  printf("Total rain:%.2lf\n",totalr);
  printf("Avr rainfall:%.2lf\n",totalr/12);
  return 0;
}
