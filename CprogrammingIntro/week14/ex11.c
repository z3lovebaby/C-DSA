#include<stdio.h>
typedef struct Wrec
{
  float rainf,ht,lt,av;
} wet;

int main(){
  wet month[12],max;
  float totalr,avrr;
  int i,j;
  totalr=avrr=0;
  printf("Nhap lieu:\n");
  for(i=0;i<12;i++){
    printf("Thang %d:\n",i+1);
    printf("Rainfall:");
    scanf("%f%*c",&(month[i].rainf));
    totalr+=month[i].rainf;
    do{
      printf("High temp:");
      scanf("%f%*c",&(month[i].ht));
      if(month[i].ht<-40||month[i].ht>50){
	printf("Error!\n");
      }
    }while(month[i].ht<-40||month[i].ht>50);
    //
    do{
      printf("Low temp:");
      scanf("%f%*c",&(month[i].lt));
      if(month[i].ht<-40||month[i].lt>50){
	printf("Error!\n");
      }
    }while(month[i].lt<-40||month[i].lt>50);
  }
  //////
   printf("Month \t      Rainfall\t      High tem\t     Low temp\n");
  for (i=0;i<12;i++){
    printf("%d\t\t%.2lf\t\t%.2f\t\t%.2f\n",i+1,month[i].rainf,month[i].ht,month[i].lt);
  }

  
  /////
  printf("Total rain:%.2lf\n",totalr);
  printf("Avr rainfall:%.2lf\n",totalr/12);
  max.rainf=month[0].rainf;
  j=0;
  for(i=1;i<12;i++){
    if(month[i].rainf>max.rainf){
      max.rainf=month[i].rainf;
      j=i;
    }
  }
  printf("max Rainfall:%.2lf\nMonth:%d\n",max.rainf,j+1);
  max.lt=month[0].lt;
  j=0;
  for(i=1;i<12;i++){
    if(month[i].lt<max.lt){
      max.lt=month[i].lt;
      j=i;
    }
  }
  printf("Min lowtem:%.2lf\nMonth:%d\n",max.lt,j+1);
  max.ht=month[0].ht;
  j=0;
  for(i=1;i<12;i++){
    if(month[i].ht>max.ht){
      max.ht=month[i].ht;
      j=i;
    }
  }
  printf("Max htem:%.2lf\nMonth:%d\n",max.ht,j+1);
  return 0;
}
