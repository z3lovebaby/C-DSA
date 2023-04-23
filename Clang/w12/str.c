// #include<stdio.h>
// typedef struct complex {
//     float real;
//     float imag;
// } complexNum;
// int main() {
//     complexNum num1, num2,c;

//     printf("For 1st complex number\n");
//     printf("Enter real and imaginary parts respectively:");
//     scanf("%f %f",&num1.real,&num1.imag);

//     printf("For 2nd complex number\n");
//     printf("Enter real and imaginary parts respectively:");
//     scanf("%f %f",&num2.real,&num2.imag);
//     //
//     printf("Sum: %.2f %.2fi + %.2f %.2fi = %.2f %.2fi  \n",num1.real,num1.imag,num2.real,num2.imag,num1.real+num2.real,num1.imag+num2.imag);
//     printf("Minus: %.2f %.2fi - %.2f %.2fi = %.2f %.2fi  \n",num1.real,num1.imag,num2.real,num2.imag,num1.real-num2.real,num1.imag-num2.imag);
//     c.real = num1.real*num2.real - num1.imag*num2.imag;
//       c.imag = num1.imag*num2.real + num1.real*num2.imag;
//       printf("Multiply: %.2f + %.2f",c.real,c.imag);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include <stdlib.h>
// #include <time.h>
// #define maxLeng 25
// void getin4(float *a,char name[][maxLeng],int i){
//     printf("Nhap vao ten cua nhan vat %d: ",(int)*(a+4*i)+1);
//     scanf("%[^\n]%*c",&name[(int)*(a+4*i)]);
//     //get indicator
//     do{
//         printf("Enter the speed indicator (>0) of %s: ",name[(int)*(a+4*i)]);
//         scanf("%f%*c",a+4*i+1);
//         if (*(a+4*i+1)<0){
//             printf("**************\nError!!The speed indicator must be greater than 0.\nEnter again!!\n");
//         }
//     }while(*(a+4*i+1)<0);
//     //
//     do{
//         printf("Enter the health indicator (>0) of %s: ",name[(int)*(a+4*i)]);
//         scanf("%f%*c",a+4*i+2);
//         if (*(a+4*i+2)<0){
//             printf("**************\nError!!The health indicator must be greater than 0.\nEnter again!!\n");
//         }
//     }while(*(a+4*i+2));
//     //
//     do{
//         printf("Enter the power indicator (>0) of %s: ",name[(int)*(a+4*i)]);
//         scanf("%f%*c",a+4*i+3);
//         if (*(a+4*i+3)<0){
//             printf("**************\nError!!The power indicator must be greater than 0.\nEnter again!!\n");
//         }
//     }while(*(a+4*i+3)<0);
//     printf("Enter indicator for successful character !!\n");
//     printf("\t\t==============-Press ENTER to Continue-=============== ");
//     while( getchar() != '\n' );
// }
// int main(){
//   float *a;
//   a=(float*)malloc(3*4*sizeof(float));
//   char name[3][maxLeng];
//   getin4(a,name,1);
//   return 0;
// }
#include<stdio.h>
#include<string.h>
void test(char *a){
    int i;
    for (i=0;i<5;i++){
        printf("%p\n",a+i);
    }
}
int main(){
    char a[40]="123456789";
    test(a);
    return 0;
}
