#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n>=21 && n<=10000){
        for(i=1;i<=n;i++){
            if(i%3==0 && i%7==0){
                printf("%d\n",i);
            }
        }


        break;
    }





    return 0;
}