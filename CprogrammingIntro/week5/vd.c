#include<stdio.h>
int main(){
  float km,price,fue,cost;
  printf("Input,Distance of your trip in km: ");
  scanf("%f",&km);
  printf("Price of 1l of fuel: ");
  scanf("%f",&price);
  fue=0.08*0.621*km;
  cost=fue*price;
  printf("The number of fuel consumptio: %.2f lit\n",fue);
  printf("Cost: %.2f\n",cost);
  return 0;


}
