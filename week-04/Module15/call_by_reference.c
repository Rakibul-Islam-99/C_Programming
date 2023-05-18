#include<stdio.h>

void fun(int *ptr){
    *ptr=25;
    printf("fun er output - %d\n",*ptr);

}
int main()
{
  int x=10;
    printf("main er output_before ptr- %d\n",x);
  
  fun(&x);
  printf(" main er output_after  ptr-%d\n",x);



    return 0;
}