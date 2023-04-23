#include<stdio.h>
double getMass() {
  double m;
  do {
    printf("Mass:");
    scanf("%f",&m);
    if (m<0) printf("Wrong data input. m must >=0 \n
");
  } while (m<0);
  return m;
}
double getSpeed() {
  double v;
  do {
    printf("Speed:");
    scanf("%f",&v);
    if (v<0) printf("Wrong data input. Positive value required!\n
");
  } while (v<0);
  return v;
int main(){
  double m,v;
  do {
    printf("Mass:");
    scanf("%lf",&m);
    printf("Speed:");
    scanf("%lf",&v);
  } while (m<0 && v <=0);
  printf("Kinetic Energy: %.2lf\n",kine_E(m,v));
  return 0;
}
double kine_E(double m,double v){

  return 1.0/2*m*v*v;
}
