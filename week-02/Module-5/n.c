#include<stdio.h>
int main()
{
  char a;
  scanf("%c",&a);
  if(a>=97 && a<=122){
    int answer=a-32;
    printf("%c\n",answer);
  }
  else{
    int answer=a+32;
    printf("%c\n",answer);
  }



    return 0;
}