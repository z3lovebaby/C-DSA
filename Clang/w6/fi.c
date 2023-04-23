#include<stdio.h>
int main(){
  long long int stn=1,sth=2,tg=0;
  int i;
  printf("%lld\n%lld\n",stn,sth);
  for (i=0;i<98;i++){
    tg=sth;
    sth=stn+sth;
    stn=tg;
    printf("So thu %d %lld\n",i+3,sth);

  }
  return 0;
}
