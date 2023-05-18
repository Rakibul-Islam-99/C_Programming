#include<stdio.h>
#include<string.h>
int main()
{
  int a[100],b[100];
  scanf("%s %s",a,b);
  int temp;
  for(int i=0;i<=strlen(b);i++){
   temp=a[i];
    a[i]=b[i];
    b[i]=temp;
    
  }
    
  printf("%s %s\n",a,b);
  printf("%s %s\n",a,b);
  printf("%s %s\n",a,b);
  printf("%s %s\n",a,b);

  printf("%s %s\n",a,b);
  printf("%s %s\n",a,b);
  printf("%s %s\n",a,b);
  printf("%s %s\n",a,b);
  printf("%s %s\n",a,b);


    return 0;
}