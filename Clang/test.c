#include<stdio.h>
int main(){
  char s1[8] = "cong_";
  char s2[] = "nghe";
  strcat(s1, s2);
  printf("%s\n", s1);
  return 0;
}
