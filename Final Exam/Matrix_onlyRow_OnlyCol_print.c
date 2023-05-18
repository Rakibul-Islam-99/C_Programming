#include<stdio.h>
int main()
{
  int row,col;
  scanf("%d %d",&row,&col);
  int a[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  int r=row-1;
  int c=col-1;
  for(int i=0;i<col;i++)
  {
    printf("%d ",a[r][i]);
  }
  printf("\n");
  for(int i=0;i<row;i++)
  {
    printf("%d ",a[i][c]);
  }

 



    return 0;
}