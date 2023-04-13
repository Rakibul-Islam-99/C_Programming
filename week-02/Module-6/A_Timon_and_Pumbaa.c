#include<stdio.h>
int main()
{
  int a,b,sub;
  scanf("%d %d",&a,&b);
  sub=a-b;
  if(sub<0){
    printf("0\n");
  }
  else{
    printf("%d\n",sub);
  }



    return 0;
}