#include<stdio.h>
#include<math.h>
#define maxS 50
typedef struct
{
  int id;
  char name[30];
  int x,y;
  int r;
  double d;
}station;
//
void getSta (station *a,int *check){
  do{
    printf("ID (must be positive number): ");
    scanf("%d%*c",&a->id);
    if (a->id<0){
      printf("Must be positive num.\n");
    }
    if (*(check+a->id)){
      printf("%d existed. Choose different ID.\nTry Again!\n",a->id);
    }
  }while (a->id<0||*(check+a->id));
  *(check+a->id)=1;
  printf("station chief's name: ");
  scanf("%[^\n]%*c",a->name);
  printf("x: ");
  scanf("%d%*c",&a->x);
  printf("y: ");
  scanf("%d%*c",&a->y);
  do{
    printf("R (1<=R<=100): ");
    scanf("%d%*c",&a->r);
    if(a->r>100||a->r<1) printf("Must be >=1 and <=100\n");
  }while (a->r>100||a->r<1);

}
///

int main(){
  station list[maxS];
  int ch,i,j,n,m,x,y,check[2000]={0};
  /*for (i=0;i<2000;i++){
    check[i]=0;
  }
  printf("\n");*/
  do{
    printf("1. Nhap moi tram thu phat.\n");
    printf("2. Bo sung tram thu phat.\n");
    printf("3. Xem danh sach tram.\n");
    printf("4. Tinh khoang cach.\n");
    printf("5. Kiem tra vung phu song.\n");
    printf("6. Thoat.\n");
    printf("Your choice: ");
    scanf("%d%*c",&ch);
    switch(ch){
    case 1:
      do{
	printf("So luong tram (1-%d): ",maxS);
	scanf("%d%*c",&n);
	if (n<1||n>50){
	  printf("So luong khong thoa man 1-%d\n",maxS);
	}
      }while(n<1||n>50);
      for (i=0;i<n;i++){
	getSta(&list[i],check);
      }
      break;
    case 2:
      do{
	printf("So tram muon bo sung: ");
	scanf("%d%*c",&m);
	if (m<0){
	  printf("Must be >0\n");
	}
	if (m+n>50){
	  printf("%d da duoc nhap. Chon lai (<%d) de tong so tram khong vuot qua 50.\n",n,50-n);
	}
      }while(m<0||m+n>50);
      for (i=n;i<m+n;i++){
	getSta(&list[i],check);
      }
      n=n+m;
      break;
    case 3:
      printf("Danh sach tram:\n");
      printf("==================================================================\n");
      printf("|   ID   |          Name            |    Toa do    |      R      |\n");
      for (i=0;i<n;i++){
	printf("|%6d  |%20s      |   (%3d,%3d)  |      %d     |\n",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r);
      }
      printf("==================================================================\n");
      break;
    case 4:
      printf("Danh sach tram:\n");
      printf("======================================================================================\n");
      printf("|   ID   |          Name            |    Toa do    |      R      |     Khoang cach   |\n");
      for (i=0;i<n;i++){
	list[i].d=sqrt(list[i].x*list[i].x+list[i].y*list[i].y);
	printf("|%6d  |%20s      |   (%3d,%3d)  |      %d     |%10.2lf         |\n",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r,list[i].d);
      }
      printf("======================================================================================\n");
      ////
      for (i=0;i<n-1;i++){
	for (j=i+1;j<n;j++){
	  if (list[i].d<list[j].d){
	    station temp=list[i];
	    list[i]=list[j];
	    list[j]=temp;
	  }
	}
      }
      printf("After sort:\n");
      printf("======================================================================================\n");
      printf("|   ID   |          Name            |    Toa do    |      R      |     Khoang cach   |\n");
      for (i=0;i<n;i++){
	list[i].d=sqrt(list[i].x*list[i].x+list[i].y*list[i].y);
	printf("|%6d  |%20s      |   (%3d,%3d)  |      %d     |%10.2lf         |\n",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r,list[i].d);
      }
      printf("======================================================================================\n");

      break;
    case 5:
      printf("Nhap vao toa do muon kiem tra:\n");
      printf("x: ");
      scanf("%d%*c",&x);
      printf("y: ");
      scanf("%d%*c",&y);
      for (i=0;i<n;i++){
	if ((sqrt( (list[i].x-x)*(list[i].x-x) +(list[i].y-y)*(list[i].y-y) ))<list[i].d){
	  printf("|%6d  |%20s      |   (%3d,%3d)  |      %d     |%10.2lf         |\n",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r,list[i].d);
      
	}

      }
      break;
    case 6:
      printf("Succeccfull. Program will exist.\n");
      break;
    }
  }while(ch!=6);
  return 0;
}
