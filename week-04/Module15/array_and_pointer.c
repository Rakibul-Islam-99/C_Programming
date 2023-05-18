#include<stdio.h>
int main()
{
  int ar[5]={4,5,7,9,1};
  printf("0th position er address %p\n",&ar[0]);
  printf("0th position er address %p\n",ar);
  printf("0th position er value %d\n",ar[0]);
  printf("0th position er value %d\n",*ar);
  printf("4th position er value %d\n",*(ar+3));
  printf("4th position er value %d\n",*(3+ar));
  printf("4th position er value %d\n",ar[3]);
  printf("4th position er value %d\n",3[ar]);



    return 0;
}