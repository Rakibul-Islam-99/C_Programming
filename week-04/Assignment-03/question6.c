#include<stdio.h>
// Example of Pass by value
void function(int x){
    //x=27;
    printf("Value of x= %d\n",x);
    printf("Address of x= - %p\n",&x);
    
}

int main()
{
    int a;
    scanf("%d",&a);
    function(a);
    printf("Value of a= %d\n",a);
    printf("Address of a= %p\n",&a);
    return 0;
}