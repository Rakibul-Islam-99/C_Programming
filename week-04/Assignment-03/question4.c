#include<stdio.h>
//Has return + has perameter
int add(int x, int y){

    int sum=x+y;
    return sum;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result=add(a,b);
   printf("%d\n",result);
  
    return 0;
}