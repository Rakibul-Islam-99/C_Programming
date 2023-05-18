#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    fgets(a,1001,stdin);
    int cnt_s=0,cnt_c=0,count_total=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            cnt_s++;
        }
        if(a[i]>='A' && a[i]<='Z')
        {
            cnt_c++;
        }
        count_total++;

    }
   
    int cnt_sp=count_total-(cnt_c+cnt_s);

    printf("Capital - %d\n",cnt_c);
    printf("Small - %d\n",cnt_s);
    printf("Spaces - %d\n",cnt_sp);
    


    return 0;
}