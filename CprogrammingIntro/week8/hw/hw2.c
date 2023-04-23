#include<stdio.h>
#include<math.h>
int main(){
  double kq,n,error,x;
  float temp = 1;
  char ch;
      printf("Welcome. I am a Calculator !!\n");
  do{
      
      printf("Please type your  choice: \n");
      printf("1.(Press N) Input the positive number and the error that you want to execute \n");
      printf("2.(Press S) Find out SIN(n)\n");
      printf("3.(Press C) Find out square root of n\n");
      printf("4.(Press E) Find out e to the power of n\n");
      printf("5.(Press T) Exit\n");
      printf("====>So, your choice is:");
    scanf("%c%*c",&ch);
    switch(ch){
    case 'N':;
      n=-1;
      while(n<0){
          printf("The number you want to execute is : ");
          scanf("%lf%*c",&n);
          printf("The error that you want when calculate is: ");
          scanf("%lf%*c",&error);
          if(n<=0) printf("Your data is incorrect\nPlease type one more time again!!\n");

      }
      break;

      case 'S':;
      int a,nn=0;
      double sinn=0,xx;
      xx=n*3.141/180;
      kq=0;
      do{
        
        int a;
    if (nn % 2 == 0)
        a = 1;
    else
        a = -1;
    temp=1;
    for (int i = 1; i <= 2 * nn + 1; i++)
        temp = temp * xx / i;
        nn++;
      sinn=a*temp;
      kq+=sinn;
      }while (fabs(sinn)>error);
      printf("The value of sin(n) is: %.3lf\n",kq);
      break;

      case 'C':;
      double xi;
      int count=0;
      xi=n;
      do {
        x=xi;
        xi=0.5*(x+n/x);
      }while (fabs(xi-x)>error);
      printf("The value of sqrt(%.3lf): %.3lf\n",n,xi);
      break;

      case 'E':;
      int nnn=0;
      double ex=0;
      do{
    temp = 1;
    for (int i = 1; i <= nnn; i++)
        temp = temp * n / i;
      
      nnn++;
      ex+=temp;
      }while (fabs(temp)>error);

      printf("The value of e^%.2lf is: %.3lf\n",n,ex);
      break;

      case 'T':;
      printf("Goodbye!!!\n");
      break;

    default:
      printf("Your input is error!!");
      break;
  }


  }while(ch!='T');

}
