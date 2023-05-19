#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int j=1;j<=n;j++)
    {
        scanf("%d",&a[j]);
    }

    int s;
    scanf("%d",&s);
    int res=-1;

    for( int j=1;j<=n;j++)
    {
        if(a[j]==s)
        {
            res=j;
            break;
        }
     
    }
    if(res==-1)
    {
            printf("Case %d: Not Found\n",i);
    }
    else{
          printf("Case %d: %d\n",i,res);
           
    }
    
    
  }

    return 0;
}