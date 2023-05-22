#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  int max=a[0];
  int min=a[0];
  int maxindex=0;
  int minindex=0;

  for(int i=0;i<n;i++)
  {
    if(a[i]>max)
    {
        max=a[i];
        maxindex=i;
    
    }
    if(a[i]<min)
    {
        min=a[i];
        minindex=i;
        
    }
  }

     int tmp=a[maxindex];
     a[maxindex]=a[minindex];
     a[minindex]=tmp;

  for(int i=0;i<n;i++)
  {
    
    printf("%d ",a[i]);

  }
  
    return 0;
}