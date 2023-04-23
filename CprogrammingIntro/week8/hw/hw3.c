#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int r,fn,st,p,turn,total;
  srand((int)time(0));
  r = rand()%2+1;
  printf("The goal is to reach a given number from the a starting num.\n");
  printf("Play by turn.\n");
  printf("Who play first is determined by random\n");
  printf("Some rule...check hdsd\n");
  printf("ICT GAME CENTER\n");
  printf("Start: ");
  scanf("%d",&st);
  total=st;
  printf("Destination: ");
  scanf("%d",&fn);
  printf("Let start now !!\n");
  printf("Random num: %d\nP%d play first\n",r,r);
  int count=r,check1,check2;
  printf("P%d_Your turn !\n",turn=count%2==0?2:1);
  do{
    printf("====>Choose a number:");
    scanf("%d",&p);
    if (p>5) printf("=>Nhap lai so <5.\n");
  }while (p>5);
  check1=p;
  total+=p;
  count++;
  printf("====>Now the value: %d\n",total);
  do {
    printf("P%d_Your turn !\n",turn=count%2==0?2:1);
    do{
      printf("====>Choose a number:");
      scanf("%d",&p);
      if (p>5) printf("Chon lai so nho hon 5\n");
      if ((check1+p)%2==0){
	if (p % 2 ==0) printf("Chon lai so le <5.\n");
	else printf("Chon lai so chan <5.\n");
      }
    }while (p>5 || (check1+p)%2==0);
    total+=p;
    check1=p;
    printf("====>Now the value: %d\n",total);
    count++;
  }while (total<fn);
  if (total==fn){printf("Player%d, ban la nguoi chien thang !\n",turn=(count-1)%2==0?2:1);}
  else printf("Hoa ma khong co nguoi chien thang !\n");
  return 0;
}
