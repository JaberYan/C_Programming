#include<stdio.h>
int main()
{
    int n,in,v;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&ar[i]);
    }
    scanf("%d %d",&in,&v);
    ar[in]=v;
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",ar[i]);
    }
    
    
    return 0;
}