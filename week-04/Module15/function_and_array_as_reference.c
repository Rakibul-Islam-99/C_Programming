#include<stdio.h>

void fun(int ar[],int n){
     ar[1]=300;
    for(int i=0;i<n;i++){
    printf(" %d ",ar[i]);
    
  }
  printf("-fun er arr\n");


}
int main()
{
  int ar[5]={10,20,30,40,50};
  fun(ar,5);
  for(int i=0;i<5;i++){
    printf("%d ",ar[i]);
  }



    return 0;
}