#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++){
    scanf("%d ",&ar[i]);
  }
  int even_sum=0,odd_sum=0;
  for(int i=0;i<n;i++){
    if(ar[i]%2==0){
        even_sum+=ar[i];
    }
    if(ar[i]%2==1){
        odd_sum+=ar[i];
    }
  }
  printf("%d %d\n",even_sum,odd_sum);

    return 0;
}