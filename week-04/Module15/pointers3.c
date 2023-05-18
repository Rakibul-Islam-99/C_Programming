#include<stdio.h>
int main()
{
  double x=5.30;
  double *ptr=&x;
  double *ptr2=ptr;
  *ptr2=10.55;

  printf("%0.2lf\n",x);
  printf("%0.2lf\n",ptr);
  printf("%0.2lf\n",ptr2);




    return 0;
}