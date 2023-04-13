#include<stdio.h>
int main()
{
  long long int e,m,b,result=0;;
  scanf(" %lld %lld %lld",&e,&m,&b);
  if(e==0 || b==0){
    printf("0\n");
  }
  else{
    long long int min=e;
    if(m<min){
        min=m;
    }
    if(b<min){
        min=b;
    }
    e-=min;
    m-=min;
    b-=min;
    result+=min;
    if(e/2<b){
        result+=e/2;
    }
    else{
        result+=b;
    }
    printf("%lld\n",result);

  }


    return 0;
}