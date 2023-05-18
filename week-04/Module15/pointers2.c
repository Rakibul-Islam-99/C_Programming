#include<stdio.h>
int main()
{
  int x=10;
  int *ptr=&x;
  //x=20;
  *ptr=30;
  printf("%d\n",x);
  printf("%d\n",*ptr);



    return 0;
}