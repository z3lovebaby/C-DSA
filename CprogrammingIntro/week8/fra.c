# include <stdio.h>
int main ()
{
  int i, n, f;
  printf (" Enter n: ");
  scanf ("%d", &n);
  f = 1;
  if (n>=0){
  for (i = 1; i <= n; ++i) {
    f *= i;
  }
  printf ("%d! = %d\n", n, f);
  }else printf("Nhap lai n khong am\n");
  return 0;
}
