#include<stdio.h>
//Example of Pass by reference 
void function(int *ptr){
    *ptr=26;
    printf("Value of function ptr= %d\n",*ptr);
    

}
int main()
{
  int a=17;
    printf("Output of main before ptr= %d\n",a);
  
  function(&a);
  printf(" Output of main after ptr= %d\n",a);
 
    return 0;
}