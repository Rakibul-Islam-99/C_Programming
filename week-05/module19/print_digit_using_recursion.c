#include<stdio.h>
void fun(int n)
{
    if(n==0)return;
    int x=n%10;//last digit
    fun(n/10);
    printf("%d ",x);


}
int main()
{
    
    int a;
    scanf("%d",&a);
    

    fun(a);
  



    return 0;
}