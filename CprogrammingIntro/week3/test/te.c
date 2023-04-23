#include<stdio.h>
int main(){
  printf("a=%.3g\n",12001.2304000);
  printf("%.5s\n","hello world");
  printf("%-10dnta co ta co\n",123);
  printf("%-11s \tTa có\n","Hello");
  printf( "%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23 );
  printf( "%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23 );
  int c = 1427;
  double p = 1427.120;
  printf( "%#o\n", c );
    printf( "%#o\n", c );
  printf( "%#x\n", c );
  printf( "%#X\n", c );
  printf( "\n%g\t\t", p );
  printf( "%#g\n", p );
 
}
//%6g tao 6 o. neu so co 7 cs van lay 7cs
//%.6g toi da 6 chu so
