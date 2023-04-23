#include<stdio.h>
#include<math.h>
int main(){
  int n,i;
  printf("Nhap vao n: ");
  scanf("%d",&n);
  n=n+1;
  while (1){
    int dem=0;
    i=2;
    while (i<=sqrt(n)&&dem==0){
        if (n % i ==0)
	  dem=dem+1;
	i++;
    
  }
    if (dem==0&&n!=1)
      {
	printf("SNT dau tien can tim:%d\n",n);
	break;
      }
    n=n+1;
  }
  
  /// goi ham...
  return 0;

}  
