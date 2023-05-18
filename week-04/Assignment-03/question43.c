#include<stdio.h>
//No return + has parameter
void subtraction(int x, int y){

    int sub=x-y;
    printf("%d\n",sub); 

}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    subtraction(a,b);


    return 0;
}