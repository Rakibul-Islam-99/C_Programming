#include<stdio.h>
#include<string.h>
int main()
{
  char a[11],b[11];
  scanf("%s%s",a,b);
  int res1=strlen(a);
  int res2=strlen(b);
  printf("%d %d\n",res1,res2);
  printf("%s%s\n",a,b);
  char tmp=a[0];
  a[0]=b[0];
  b[0]=tmp;
  printf("%s %s\n",a,b);

    return 0;
}