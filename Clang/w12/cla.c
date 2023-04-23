#include<stdio.h>
int main(){
    FILE *in1,*in2,*out;
    char c;
    in1=fopen("file1.txt","r");
    in2=fopen("file2.txt","r");
    out=fopen("file3.txt","w+");
    while ((c = fgetc(in1)) != EOF)
      fputc(c, out);
    if(c!=' '&&(c = fgetc(in2))!=' '){
        fputc(' ', out);
    }
    while ((c = fgetc(in2)) != EOF)
      fputc(c,out);
    
    fclose(in1);
    fclose(in2);
    fclose(out);
    return 0;
}