#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#define maxLeng 25
void Update(float a[][4],float x,int i){
  int j;
  for (j=1;j<=3;j++){
    a[i][j]*=x;
  }
}
void OUT(float a){
  float t;
  int i;
  t=a-(int)a;
  for (i=0;i<(int)a;i++){
    printf("%c",'=');
  }
  if (t>0.5){
    printf("%c",'-');
  }
}
void OUTver(float a){
  float t;
  int i;
  t=a-(int)a;
  if (t>0.5){
    printf("%c",'-');}
  for (i=0;i<(int)a;i++){
    printf("%c",'=');
  }
}
void arena(int i,int j,float a[][4],char name[][maxLeng]){
  int turn;
  float h1,h2;
  h1=a[i-1][2];
  h2=a[j-1][2];
  srand((int)time(0));
  printf("\n\n\tTHE MATCH BETWEEN:\n");
  printf("\t=========================\n");
  printf("||%16s VS %-16s|| \n",name[i-1],name[j-1]);
  printf("\t=========================\n");
  printf("Speed of %s: %.2f\n",name[i-1],a[i-1][1]);
  printf("Speed of %s: %.2f\n",name[j-1],a[j-1][1]);
  if (a[i-1][1]>a[j-1][1]){
    turn = 0;

  }else if (a[i-1][1]<a[j-1][1]){
    turn = 1;
  }else {
    printf("Equal speed, first player is chosen at random.\n");
    turn=rand()%10;
  }
  if (turn) printf("%s attacks first\n",name[j-1]);
  else printf("%s attacks first\n",name[i-1]);
  printf("\t\t======-Press ENTER to Continue-======");
  while( getchar() != '\n' );
  //
  do{

    printf("_________________________________________________\n");
    printf("%25s VS %s \n",name[i-1],name[j-1]);
    printf("_________________________________________________\n");
    printf("SPEED:\t%-20.2f\t",a[i-1][1]);
    // printf("\t\t");
    printf("\t%-6.2f:SPEED\t",a[j-1][1]);
    printf("\n");
    //
    printf("HEALTH  %-5.2f %-25c ",h1,' ');
    printf("%-5.2f  HEALTH\n",h2);
    OUT(h1);
    if (h1<=7){
      printf("\t\t\t\t\t");
    }else
      printf("\t\t\t\t");
    OUTver(h2);
    printf("\n");
    //
    printf("POWER:\t%-20.2f\t",a[i-1][3]);
    printf("\t%-6.2f:POWER",a[j-1][3]);
    printf("\n");
    //
    printf("_________________________________________________\n");
    if (turn ==0){
      printf("\t===============================\n");
      printf("\t\tTurn: %s\n",name[i-1]);
      printf("\t\tAttack with dame equal: %.2f\n",a[i-1][3]);
      printf("\t\tHP of %s reduce to %.2f from %.2f\n",name[j-1],h2-a[i-1][3],h2);
      printf("\t===============================\n\n\n");
      h2-=a[i-1][3];
      turn =1-turn;
    }else{
      printf("\t===============================\n");
      printf("\t\tTurn: %s\n",name[j-1]);
      printf("\t\tAttack with dame equal: %.2f\n",a[j-1][3]);
      printf("\t\tHP of %s reduce to %.2f from %.2f\n",name[i-1],h1-a[j-1][3],h1);
      printf("\t===============================\n\n\n");
      h1-=a[j-1][3];
      turn =1-turn;
    }
  }while(h1>0&&h2>0);
  if (h1<=0) {
    printf("%s KNOCK OUT!!!!\n%s WINN!!!\n",name[i-1],name[j-1]);
    Update(a,1.03,j-1);
    Update(a,1.01,i-1);
  }
  else {
    printf("%s KNOCK OUT!!!!\n%s WINN!!!\n",name[j-1],name[i-1]);
    Update(a,1.03,i-1);
    Update(a,1.01,j-1);
  }
}
void getin4(float a[][4],char name[][maxLeng],int i);
//
void pri(float a[][4],char name[][maxLeng]){
  printf("+=============================================+ \n");
  printf("|                    |       |        |       |\n");
  printf("|     CHARACTER      | SPEED | HEALTH | POWER |\n");
  printf("|====================|=======|========|=======| \n");
  printf("|                    |       |        |       |\n");
  printf("|\t%-13s|%-7.2f| %-7.2f| %-6.2f|\n",name[0],a[0][1],a[0][2],a[0][3]);
  printf("|====================|=======|========|=======|\n");
  printf("|                    |       |        |       |\n");
  printf("|\t%-13s|%-7.2f| %-7.2f| %-6.2f|\n",name[1],a[1][1],a[1][2],a[1][3]);
  printf("|====================|=======|========|=======|\n");
  printf("|                    |       |        |       |\n");
  printf("|\t%-13s|%-7.2f| %-7.2f| %-6.2f|\n",name[2],a[2][1],a[2][2],a[2][3]);
  printf("+====================|=======|========|=======+\n");
  printf("\t\t=-Press ENTER to Continue-=");
  while( getchar() != '\n' );
}
int main(){
  float a[3][4];
  char name[3][maxLeng];
  int i;
  printf("\t\t\tRULE:\n");
  printf("\t- Three character iss be created.\n");
  printf("\t- Each character have 3 indicator:Speed-Health-Power\n");
  printf("\t- Characters with higher speed will attack first.(If they equal =>random palyer first!\n");
  printf("\t- Damage per attack equals the difference in power between them.\n");
  printf("\t- When health indicator of one character <=0. The match is over.\n");
  printf("\t- Winning characters gain 3%% of all stats, losers gain 1%%.\n");
  printf("\t- Are youu clearr!\n");
  printf("\t\t=-Press ENTER to Continue-=");
  while( getchar() != '\n' );
  //get indicator
  for (i=0;i<3;i++){
    a[i][0]=i;
    getin4(a,name,i);
  }//end get indicator
  arena(1,2,a,name);
  printf("\n\n\t\tAFTER MATCH 1\t\t\n");
  pri(a,name);
  arena(2,3,a,name);
  printf("\n\n\t\tAFTER MATCH 2\t\t\n");
  pri(a,name);
  arena(3,1,a,name);
  printf("\n\n\t\tAFTER MATCH 3\t\t\n");
  pri(a,name);



  return 0;
}

//////
/////////////
////////////////
void getin4(float a[][4],char name[][maxLeng],int i){
  printf("Nhap vao ten cua nhan vat %d: ",(int)a[i][0]+1);
  scanf("%[^\n]%*c",&name[(int)a[i][0]]);
  //get indicator
  do{
    printf("Enter the speed indicator (>0) of %s: ",name[(int)a[i][0]]);
    scanf("%f%*c",&a[i][1]);
    if (a[i][1]<0){
      printf("**************\nError!!The speed indicator must be greater than 0.\nEnter again!!\n");
    }
  }while(a[i][1]<0);
  //
  do{
    printf("Enter the health indicator (>0) of %s: ",name[(int)a[i][0]]);
    scanf("%f%*c",&a[i][2]);
    if (a[i][2]<0){
      printf("**************\nError!!The health indicator must be greater than 0.\nEnter again!!\n");
    }
  }while(a[i][2]<0);
  //
  do{
    printf("Enter the power indicator (>0) of %s: ",name[(int)a[i][0]]);
    scanf("%f%*c",&a[i][3]);
    if (a[i][3]<0){
      printf("**************\nError!!The power indicator must be greater than 0.\nEnter again!!\n");
    }
  }while(a[i][3]<0);
  printf("Enter indicator for successful character !!\n");
  printf("\t\t==============-Press ENTER to Continue-=============== ");
  while( getchar() != '\n' );
}
