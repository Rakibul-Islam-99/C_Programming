#include<stdio.h>
int main()
{
  char x;
  char  Next_letter;
  scanf("%c",&x);
  if(x=='z' || x=='Z'){
    Next_letter=x-25;
    printf("%c\n",Next_letter);
  }
  else if(x>='a' && x<='z' || x>='A' && x<='Z'){
    x++;
    printf("%c\n",x);
  }

    return 0;
}