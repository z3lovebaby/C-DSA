#include<stdio.h>
#include<math.h>
int main(){
  double x1,y1,x2,y2,d;
  printf("Nhap vao toa do cua John: ");
  scanf("%lf %lf",&x1,&y1);
  printf("Nhap vao toa do cua Jane: ");
  scanf("%lf %lf",&x2,&y2);
  if (x1==0 && y1==0)
    {
      printf("John dang o Trung tam !\n");
    }else
    if (x1==0)
      {
	if (y1>0) printf("John dang o huong Bac\n"); else printf("John dang o huong Nam\n");
      }else if(y1==0)
      {
	if (x1>0) printf("John dang o huong Dong\n"); else printf("John dang o huong Tay\n");
      }else if (x1>0)
      {
	if (y1>0) printf("John dang o huong Dong Bac\n"); else printf("John dang o huong Dong Nam\n");
      } else if (y1>0) printf("John dang o huong Tay Bac"); else printf("John dang o huong Tay Nam\n");
  d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  if (x2==0 && y2==0)
    {
      printf("Jane dang o Trung tam !\n");
    }else
    if (x2==0)
      {
	if (y2>0) printf("Jane dang o huong Bac, muon gap can di %.2lf km\n",d); else printf("Jane dang o huong Nam, muon gap can di %.2lf km\n",d);
      }else if(y2==0)
      {
	if (x2>0) printf("Jane dang o huong Dong, muon gap can di %.2lf km\n",d); else printf("Jane dang o huong Tay, muon gap can di %.2lf km\n",d);
      }else if (x2>0)
      {
	if (y2>0) printf("Jane dang o huong Dong Bac, muon gap can di %.2lf km\n",d); else printf("Jane dang o huong Dong Nam, muon gap can di %.2lf km\n",d);
      } else if (y2>0) printf("Jane dang o huong Tay Bac, muon gap can di %.2lf km\n",d);else printf("Jane dang o huong Tay Nam, muon gap can di %.2lf km\n",d);

  return 0;
}
