#include<stdio.h>
#include<string.h>
#define maxSize 12
char *timho(char *a,char *hoten){
    int i;
    i=0;
    while (*(a+i)!=' '){
        *(hoten+i)=*(a+i);
        i++;
    }
    *(hoten+i)='\0';
    printf("%d\n",strlen(hoten));
    return hoten;

}
char * timten(char* a){
    int i;
    i=strlen(a)-1;
    while (i>=0&&a[i]!=' ') i--;
    return a+i+1;
}
void trim_sp (char *a){
int i,j,size;
//trim left
for (i=0;*(a+i)==' ';i++);
strcpy(a,a+i);
// trim right
size=strlen(a);
for(i=size-1;*(a+i)==' ';i--);
*(a+1+i)='\0';
//
size=strlen(a);
for (i=1;i<size-2;i++){
    if(*(a+i)==' '){
        for (j=i+1;*(a+j)==' ';j++);
        strcpy(a+i+1,a+j);
    }
}
}
int main(){
    char a[maxSize],fir[maxSize],las[maxSize],hoten[maxSize];
    int ch,i,temp,count;
    count=0;
    // strcpy(a,"Nguyen Hop");
    //  printf("Before reversing: %s\n",a);
    printf("nhap vao xau:");
    scanf("%[^\n]%*c",&a);
    ////
    trim_sp(a);
    printf("After triming: %s\n",a);
    /////
    printf("Before reversing: %s\n",a);
    printf("String %d\n",strlen(a));
    i=strlen(a)-1;
    printf("Last name:%s\n",timten(a));
    printf("Ho name:%s\n",timho(a,hoten));
    for (int j=0;j<i/2;j++){
        temp=a[i-j];
        a[i-j]=a[j];
        a[j]=temp;
    }
    printf("After reversing: %s\n",a);
    // do{
    //    printf("1. Copy first name\n");
    //     printf("2. Copy last name\n");
    //     printf("Your choice: "); 
    //     scanf("%d",&ch);
    //     switch(ch){
    //         case 1:
    //         //
    //         printf("First name %s",fir);
    //         break;
    //         case 2:
    //         break;
    //     }
    // }while (ch!=2);   
        
    return 0;
}