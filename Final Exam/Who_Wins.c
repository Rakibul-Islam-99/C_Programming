#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int cnt_t=0,cnt_p=0;
   
  for(int i=0;i<n;i++)
  {
    int x1,x2;
    scanf("%d%d",&x1,&x2);
    if(x1>x2)
    {
        cnt_t++;
    }
    if(x1<x2)
    {
        cnt_p++;
    }
    
  }
  if(cnt_t==cnt_p)
  {
    printf("Draw\n");

  }
  else
  {
    if(cnt_t>cnt_p)
    {
        printf("Tiger\n");
    }
    else
    {
        printf("Pathan\n");

    }

  }
  
    return 0;
}