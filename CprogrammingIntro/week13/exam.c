#include<stdio.h>
#include<string.h>
int main(){
  char s1[15]="Happy";
  char s2[]="New Year";
  char s3[40]="";
  printf("string 1: %s\n String 2: %s\n",s1,s2);
  printf("strcat(s1, s2) = %s\n",strcat(s1,s2));
  printf("S1 new: %s\n",s1);
  printf("strcat(s1,s2,6) = %s\n",strncat(s1,s2,6));
  printf("S1 new: %s\n",s1);
  printf("strcat(s3,s1) = %s\n",strcat(s3,s1));
  printf("S3 new: %s\n",s3);
  printf("strcat(s1,s2) = %s\n",strcat(s1,s2));
  printf("S1 new(tran size): %s\n",s1);
  return 0;
}
