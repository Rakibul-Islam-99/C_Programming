#include<stdio.h>
// Has return + no parameter
int multiplication(){
    int x,y,mult;
    scanf("%d %d",&x,&y);
    mult=(x*y);
    return mult;
   
}


int main()
{
    int s=multiplication();
    printf("%d\n",s);


    return 0;
}