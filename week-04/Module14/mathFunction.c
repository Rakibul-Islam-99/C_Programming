#include<stdio.h>
#include<math.h>
int main()
{
  double x,y;
  scanf("%lf %lf",&x,&y);
  int ans=ceil(x);
  int ans1=floor(x);
  int ans2=round(x);
  double ans3=sqrt(x);
  double ans4=pow(x,y);
  printf("%d\n",ans);
  printf("%d\n",ans1);
  printf("%d\n",ans2);
  printf("%lf\n",ans3);
  printf("%0.2lf\n",ans4);

  //abs function
  int a;
  scanf("%d",&a);
  int ans5=abs(a);
  printf("%d\n",ans5);
  



    return 0;
}