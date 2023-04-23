#include<stdio.h>
int main(){
    FILE *out;
    char c,ar[30];
    int d,m,lt,ht,hu;
    fopen_s(&out, "f.txt", "r");
     while (fscanf(out,"%d%*c%d %d%*c%d %d",&d,&m,&lt,&ht,&hu) != EOF)
    {
        printf("%d/%d %d-%d %d\n", d,m,lt,ht,hu);
    }
    fclose(out);
    return 0;
}