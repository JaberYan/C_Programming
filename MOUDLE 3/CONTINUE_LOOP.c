#include<stdio.h>
int main()
{
    int i,n,l;
    scanf("%d",&n);
    scanf("%d",&l);
    for(i=1;i<=n;i=i+1)
    {
        if(i==l)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}