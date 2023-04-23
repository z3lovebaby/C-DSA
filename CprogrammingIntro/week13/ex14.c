#include<stdio.h>
#include<string.h>
#define maxL 50
int main(){
  char a[5][maxL],b[maxL];
  int i,count,ch;
  char *ptr;
  do{
    printf("1. Nhap product\n");
    printf("2. Search.\n");
    printf("3. Thoat.\n");
    printf("Your choice:");
    scanf("%d%*c",&ch);
    switch(ch){
    case 1:
      for (i=0;i<3;i++){
	printf("Product %d:",i+1);
	scanf("%[^\n]%*c",a[i]);
      }
      break;
    case 2:
      count=0;
      printf("Search:");
      scanf("%[^\n]%*c",b);
      for (i=0;i<3;i++){
	if(strstr(a[i],b)){
	  ptr=a[i]+strlen(b);
	  printf("Find succes: %s\n",ptr);
	}else{
	  count++;
	}
      }
      if (count==3){
	printf("Not found\n");
      }
      break;
    case 3:
      printf("Thank!\n");
      break;
    default:
      printf("Error!\n");
      break;
    }//end sw
  }while(ch!=3);

  return 0;
}
