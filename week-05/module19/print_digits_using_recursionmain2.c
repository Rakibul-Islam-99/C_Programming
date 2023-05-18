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
    
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int a;
        scanf("%d",&a);
        fun(a);
        if(a==0){
            printf("0");
        }
        printf("\n");
        
    }
    

    return 0;
}