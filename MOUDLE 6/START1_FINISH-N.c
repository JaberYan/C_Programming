#include<stdio.h>
int main()
{
    int n,test;
    scanf("%d %d",&n,&test);
    for (int t = 1; t <= test; t=t+1)
    {
        for (int i = 1; i <=n ; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}