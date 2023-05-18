#include<stdio.h>
#include<string.h>
int main()
{
  char s[1001];
  scanf("%s",s);
  int count_c=0,count_s=0;
  for(int i=0;i<strlen(s);i++){
    if(s[i]>='A' && s[i]<='Z' ){
        count_c++;     
    }
     else if(s[i]>='a' && s[i]<='z' ){
        count_s++;     
    }
  }
  
  printf("%d ",count_c);
  printf("%d\n",count_s);

    return 0;
}