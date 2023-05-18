#include<stdio.h>
//function1
int add(int x, int y){

    int sum=x+y;
    return sum;
}
//function2
int sub(int x , int y){
    int subt=x-y;
    return subt;
}

int main()
{

  printf("%d\n",add(10,20));
  printf("%d\n",sub(350,20));


    return 0;
}