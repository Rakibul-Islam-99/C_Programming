#include<stdio.h>
void fun(int ar[],int n,int i){
    if(i==n){
        return;
    }
    printf("%d ",ar[i]);
    fun(ar,n,i+1);
}
int main()
{
    int k;
    scanf("%d",&k);
    int ar[k];
    for(int j=0;j<k;j++){
        scanf("%d",&ar[j]);
    }
    
    fun(ar,k,0);
  



    return 0;
}