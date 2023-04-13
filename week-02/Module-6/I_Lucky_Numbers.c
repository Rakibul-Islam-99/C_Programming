
#include<stdio.h>
int main()
{
  int a,first_digit,last_digit;
  scanf("%d",&a);
 last_digit=a%10;
 first_digit=a/10;
 if(last_digit==0){
   printf("YES\n");
 }
 else if(first_digit%last_digit==0 || last_digit%first_digit==0){
    printf("YES\n");
 }
 else{
    printf("NO\n");
 }

    return 0;
}

