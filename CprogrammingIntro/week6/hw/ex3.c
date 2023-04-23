#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  int urN,lucky;
  srand((unsigned)time(0));
  lucky = rand() % 1000000;
  printf("Con so may man cua ngay hom nay: %06d\n",lucky);
  printf("So ket qua !!\nHay nhap vao so ma ban da chon: ");
  scanf("%d",&urN);
  /////////
  if (urN>=0 &&urN<1000000)
  {
    if (urN==lucky % 1000000)
      {
	printf("So da chon: %06d\nChuc mung ban da la chu nhan cua giai dac biet, 3 ty VND\n",urN);
      }else if (urN % 100000 == lucky % 100000)
      printf("So da chon: %06d\nChuc mung ban da la chu nhan cua giai nhat,200trieu VND\n",urN);
    else if(urN % 10000== lucky % 10000)
      printf("So da chon: %06d\nChuc mung ban da la chu nhan cua giai nhi, 100trieu VND\n",urN);
    else if (urN % 1000== lucky % 1000)
      printf("So da chon: %06d\nChuc mung ban da la chu nhan cua giai ba, 10trieu VND\n",urN);
    else if (urN % 100 == lucky % 100)
      printf("So da chon: %06d\nChuc mung ban da la chu nhan cua giai khuyen khich, 500 nghin VND\n",urN);
    else printf("So da chon: %06d\nChuc ban may man lan sau !\n",urN);
  }else
    {
      printf("So b chon khong phu hop\n");
    }
  return 0;
}
