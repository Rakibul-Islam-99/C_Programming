#include<stdio.h>

#define MAX_LEN 100

int main()
{
    char ch , str[MAX_LEN],sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("%s",str);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,str,sen);
    
    return 0;
}