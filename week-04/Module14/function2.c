#include<stdio.h>

int add(){
    int x,y,sum;
    scanf("%d %d",&x,&y);
    sum=x+y;
    return sum;
    
}

int main()
{
    int s=add();
    printf("%d\n",s);
  



    return 0;
}