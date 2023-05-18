#include<stdio.h>

void fun(int *ar,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(ar+i));
    }

}
int main()
{
    int ar[5]={12,6,8,7,2};
    fun(ar,5);
  



    return 0;
}