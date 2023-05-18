#include<stdio.h>

void fun(void){
    int s=100;
    printf("%d fun er adress s-%p\n",s,&s);
}
int main()
{
  int s=200;

  printf("%d Main er adress s-%p\n",s,&s);
   fun();
  



    return 0;
}