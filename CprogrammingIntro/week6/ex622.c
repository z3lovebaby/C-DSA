#include<stdio.h>
int main()
{
  double p;
  printf("Nhap vao toa do:");
  scanf("%lf",&p);
  if (p>=0 && p<=360){
    if (p<90){
      printf("North %.2lf East\n",p);
    }else if (p<180){
      printf("North %.2lf West\n",180-p);
    }else if(p<270){
      printf("South %.2lf West\n",p-180);
    }else{
      printf("South %.2lf East\n",360-p);
    }
  }else{
    printf("Nhap lai toa do\n");
  }
  return 0;
}
