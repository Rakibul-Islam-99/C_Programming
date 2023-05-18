#include<stdio.h>

void fun(int x){
    //x=100;
    printf("%d\n",x);
    printf("fun er x er address - %p\n",&x);
}

int main()
{
  int x=10;
  
  printf("Main er x - %d\n",x);
  printf("Main er x er address - %p\n",&x);

    fun(x);



    return 0;
}