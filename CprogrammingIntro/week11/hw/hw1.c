#include<stdio.h>
#define maxRo 5
#define maxCo 3
void Status(int lisys[][maxCo]);
void Wstt(int W[][maxCo]);
int main(){
  int lisys[maxRo][maxCo],W[maxRo][maxCo];
  int i,j,ch,ro,co,val;
  //khoi tao gtri ban dau
  for (i=0;i<maxRo;i++){
    for (j=0;j<maxCo;j++){
      lisys[i][j]=0;
      W[i][j]=0;
    }
  }//edn for1
  Status(lisys);
  do{
    printf("\t\tMENU MANAGER LIGHTSYSTEM\n");
    printf("\t1. Turning on/off in ROW\n");
    printf("\t2. Turning on/off in COLUMN\n");
    printf("\t3. Turning on/off by position\n");
    printf("\t4. View system power consumption\n");
    printf("\t5. Status\n");
    printf("\t6. Exist\n");
    printf("\t YOUR CHOICE: ");
    scanf("%d%*c",&ch);//print menu
    switch(ch){
    case 1:
      //get row
      do{
	printf("Row: ");
	scanf("%d",&ro);
	if (ro<1||ro>maxRo)
	  printf("Error, Value that you enter must be long to (1-%d)\nTry again\n",maxRo);
      }while (ro<1||ro>maxRo);
      //end get row val
      do{
	printf("Turn on (enter 1) or Turnn off (enter 0)\n");
	scanf("%d%*c",&val);
	if (val!=0&&val!=1) printf("Error, you only enter 0 or 1. Try again !\n");
      }while (val!=0&&val!=1);
      //end get new val
      //gan value
      for (j=0;j<maxCo;j++){
	if (val==1&&lisys[ro-1][j]==0){
	  if (ro % 2 ==0 & (j+1) % 2 ==0) W[ro-1][j]+=20;
	  else if(ro % 2 ==1 & (j+1) % 2 ==1) W[ro-1][j]+=10;
	  else W[ro-1][j]+=15;
	}
	lisys[ro-1][j]=val;
	
      }
      Status(lisys);
      printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
      break;    
    case 2:
      //get column
      do{
	printf("Column: ");
	scanf("%d",&co);
	if (co<1||co>maxCo)
	  printf("Error, Value that you enter must be long to (1-%d)\nTry again\n",maxCo);
      }while (co<1||co>maxCo);
      //end get row val
      do{
	printf("Turn on (enter 1) or Turnn off (enter 0)\n");
	scanf("%d%*c",&val);
	if (val!=0&&val!=1) printf("Error, you only enter 0 or 1. Try again !\n");
      }while (val!=0&&val!=1);
      for (i=0;i<maxRo;i++){
	if (val==1&&lisys[i][co-1]==0){
	  if (co % 2 ==0 & (i+1) % 2 ==0) W[i][co-1]+=20;
	  else if(co % 2 ==1 & (i+1) % 2 ==1) W[i][co-1]+=10;
	  else W[i][co-1]+=15;
	}
	lisys[i][co-1]=val;
      }
      Status(lisys);
      printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
      break;
    case 3:
      printf("Enter position by enter row and col\n");
      do{
	printf("Row: ");
	scanf("%d",&ro);
	if (ro<1||ro>maxRo)
	  printf("Error, Value that you enter must be long to (1-%d)\nTry again\n",maxRo);
      }while (ro<1||ro>maxRo);
      do{
	printf("Column: ");
	scanf("%d",&co);
	if (co<1||co>maxCo)
	  printf("Error, Value that you enter must be long to (1-%d)\nTry again\n",maxCo);
      }while (co<1||co>maxCo);
      //end get position
      
      if (lisys[ro-1][co-1]==0){
	printf("The light %d-%d is off,now\n",ro,co);
      }else printf("The light %d-%d is on,now\n",ro,co);
      val=lisys[ro-1][co-1];
      //turn on or turn off
	do{
	  do{
	printf("Turn on (enter 1) or Turnn off (enter 0)\n");
	scanf("%d%*c",&val);
	if (val!=0&&val!=1) printf("Error, you only enter 0 or 1. Try again !\n");
      }while (val!=0&&val!=1);
	if (val==lisys[ro-1][co-1]){
	  if (lisys[ro-1][co-1]==0){
	    printf("The light %d-%d is off,now\nYou must enter 1\n",ro-1,co-1);
      }else printf("The light %d-%d is on,now\nYou must enter 0\n",ro-1,co-1);
	}
      }while (val==lisys[ro-1][co-1]);
	lisys[ro-1][co-1]=val;
	if (val==1){
	  if (ro % 2 ==0 & co % 2 ==0) W[ro-1][co-1]+=20;
	  else if(ro % 2 ==1 & co % 2 ==1) W[ro-1][co-1]+=10;
	  else W[ro-1][co-1]+=15;
	}
	      Status(lisys);
	      printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
	break;
    case 4:
      Wstt(W);
      printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
      break;
    case 5:
      Status(lisys);
      printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
	    break;
    case 6:
      printf("Thank youuu\n");
      break;
    default:
      printf("Your choice is not accept, it must be long to 1-5\nTry again!\n");
      break;
    }//end switch-case
  }while (ch!=6);
  return 0;
}
void Status(int lisys[][maxCo]){
  int i,j;
  for (i=0;i<maxRo;i++){
    for (j=0;j<maxCo;j++){
      printf("LIGHT[%d.%d]\t",i+1,j+1);
    }//label
    printf("\n");
    for (j=0;j<maxCo;j++){
      printf("%5d\t\t",lisys[i][j]);
    }//value turn or offf -stt
    printf("\n\n");
  }
}
void Wstt(int W[][maxCo]){
  int i,j;
  for (i=0;i<maxRo;i++){
    for (j=0;j<maxCo;j++){
      printf("LIGHT[%d.%d]\t",i+1,j+1);
    }//label
    printf("\n");
    for (j=0;j<maxCo;j++){
      printf("W:%4d\t\t",W[i][j]);
    }//value
    printf("\n\n");
  }
}
