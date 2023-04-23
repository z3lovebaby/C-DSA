#include <stdio.h>
#define size 20
//nhal arr
int inArr(int a[],int n){
  int i;
  for (i=0;i<n;i++){
    printf("a[%d] = ",i);
    scanf("%d%*c",&a[i]);
  }

}
// in arr
int outArr(int a[],int n){
  int i;
  for (i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
/*Function to get gcd of a and b*/
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
//sxep
void sortar(int a[],int n,int d){
  int i,k=0;
  int g_c_d=gcd(n,d);
  for (i=0;i<g_c_d;i++){
    int temp=a[i];
    int j=i;
    while(1){
      k=j+d;
      if (k>=n){
	k=k-n;
      }
      if(k==i) break;
      a[j]=a[k];
      j=k;
    }
    a[j]=temp;
  }
}
void sortL2R(int a[],int n,int d){
  int i,k=0;
  int g_c_d=gcd(n,d);
  for (i=0;i<g_c_d;i++){
    int temp=a[i];
    int j=i;
    while(1){
      k=j+d;
      if (k>=n){
	k=k-n;
      }
      if(k==i) break;
      a[k]=a[j];
      j=k;
    }
    a[k]=temp;
  }
}

//Compiler version gcc  6.3.0

int main()
{
  int a[size];
  int n,d,i,ch;
  do {
    printf("\t\tROTATE ARRAY\n");
    printf("1. Rotate right to left\n");
    printf("2. Rotate left to right\n");
    printf("3. Thoat\n");
    printf("\tYOUR CHOICE: ");
    scanf("%d",&ch);
    switch(ch){
    case 1:
      do{
      printf("Size of array (1-%d),n = ",size);
      scanf("%d",&n);
      if (n<1||n>size)
    printf("Error, try again!\n n must satisfy, n be long to (1-%d)\n",size);
      }while (n<1||n>size);
      ////end get n
      do{
      printf("Value of offset(<%d),d = ",n);
      scanf("%d",&d);
      if (d>n||d<0)
    printf("Error, try again!\n d must satisfy, d be long to (0-%d)\n",n);
      }while (d>n||d<0);
      //end get d
      printf("Enter the value of the elements of array:\n");
      inArr(a,n);
      printf("The original array:\n");
      outArr(a,n);
      sortar(a,n,d);
      printf("The new array after rotated R2L: \n");
      outArr(a,n);
      printf("Finish...\n");
      printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
      break;
      case 2:
      do{
      printf("Size of array (1-%d),n = ",size);
      scanf("%d",&n);
      if (n<1||n>size)
    printf("Error, try again!\n n must satisfy, n be long to (1-%d)\n",size);
      }while (n<1||n>size);
      ////end get n
      do{
      printf("Value of offset(<%d),d = ",n);
      scanf("%d",&d);
      if (d>n||d<0)
    printf("Error, try again!\n d must satisfy, d be long to (0-%d)\n",n);
      }while (d>n||d<0);
      //end get d
      printf("Enter the value of the elements of array:\n");
      inArr(a,n);
      printf("The original array:\n");
      outArr(a,n);
      sortar(a,n,n-d);
      printf("The new array after rotated L2R:\n");
      outArr(a,n);
      printf("Thanh cong.\nPress ENTER to Continue ");
            while( getchar() != '\n' );
      printf("Finish...\n");
      break;
    case 3:
      printf("Thank youuuuuuu!\n");
      break;
    default:
      printf("Invalid selection\nTry again!!\n");
      break;
    }//end switch
    
  }while (ch!=3);//end do..while
  return 0;
}
