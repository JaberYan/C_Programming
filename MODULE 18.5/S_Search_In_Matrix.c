#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d\n",&n,&m);
    int arr[n][m];
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
    }    
    int x;
    scanf("%d",&x);
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
        {
            if (arr[i][j]==x)
            {
                printf("will not take number");
            }
        }
    }
    printf("will take number");
    return 0;
}