#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int x=100;
    int *ptr=&x;
    printf("x er address %p\n",&x);
    printf("ptr er value %p\n",ptr);
    printf("x er address %p\n",&ptr);
    printf("x er size %d\n",sizeof(x));



    return 0;
}