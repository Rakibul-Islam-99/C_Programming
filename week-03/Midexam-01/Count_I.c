#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++){
    scanf("%d ",&ar[i]);
  }
  int even_count=0,odd_count=0;

  for(int i=0;i<n;i++){
    if(ar[i]%2==0){
        even_count++;
    }
    if(ar[i]%2==1){
        odd_count++;
    }
   
  }
  printf("%d %d ",even_count,odd_count);



    return 0;
}