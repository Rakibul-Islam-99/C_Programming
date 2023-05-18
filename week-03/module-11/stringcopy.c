#include<stdio.h>
#include<string.h>
int main()
{
  int a[100], b[100];
  scanf("%s %s",a,b);
  // String copy from a to b using loop
  for(int i=0;i<=strlen(b);i++){
    a[i]=b[i];
  }

  printf("%s %s \n",a,b);




    return 0;
}