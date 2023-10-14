#include<stdio.h>
int main()
{
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    int n;
    scanf("%d",&n);
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        //line print
        for (int j = 1; j <= k; j++)
        {
           printf("%d ",j); 
        }
        //line sesh
        k++;
        printf("\n");
    }
    
    return 0;
}