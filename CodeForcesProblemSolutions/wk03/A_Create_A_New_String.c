#include<stdio.h>
#include<string.h>

int main()
{
  char a[1001],b[1001];
  scanf("%s %s",&a,&b);
  int cnt1=strlen(a);
  int cnt2=strlen(b);
  printf("%d %d\n",cnt1,cnt2);

  printf("%s %s\n",a,b);

    return 0;
}