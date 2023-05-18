#include<stdio.h>

void fun(int ar[]){
    int sz= sizeof(ar)/sizeof(int);
    printf("%d\n",sz);

}

int main()
{
    int ar[3]={3,5,9};
    
    int sz= sizeof(ar)/sizeof(int);
    printf("%d\n",sz);

    fun(ar);
  



    return 0;
}