#include<stdio.h>
#define NAME "BK Bookseller"
#define VAT 0.04
int main(){
  int Qty;
  double Price,Total;
  char s[13],title[100];
  printf("Input Qty: ");
  scanf("%d",&Qty);
  printf("Input ISBN: ");
  scanf("%s%*c",s);
  printf("Title: ");
  scanf("%[^\n]%*c",title);
  printf("Price: ");
  scanf("%lf",&Price);
  Total=Qty*Price;
  /////////////////////
  printf("\t%s\n\n",NAME);
  printf("\tQty\tISBN\t\tTitle\t\t\t Price\tTotal\n");
  printf("\t%d\t%s\t%s\t\t %.2f\t%.2f\n",Qty,s,title,Price,Total);
  printf("\tVAT\t\t%.2f \n", VAT);
  printf("\tYou pay: \t%.2f\n",Total*(1+VAT/100.0));
	 return 0;

}
