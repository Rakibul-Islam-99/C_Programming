#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
  }
  int x,count1=0;
  scanf("%d",&x);
  for(int i=0;i<n;i++){
    if(ar[i]==x){
        count1++;
    }
   
  }
  printf("%d\n",count1);

    return 0;
}