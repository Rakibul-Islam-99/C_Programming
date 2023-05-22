#include<stdio.h>
#include<string.h>
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    char s[101];
    scanf("%s",s);
    int res=strlen(s)-2;
    if(strlen(s)>10){
      printf("%c%d%c\n",s[0],res,s[res+1]);
    }
    else{
        printf("%s\n",s);
    }
     
  }

    return 0;
}