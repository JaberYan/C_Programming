#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=(n*2)-1;
    int s=0,k=m;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s++;
        k-=2;
        printf("\n");
    }
    
    return 0;
}