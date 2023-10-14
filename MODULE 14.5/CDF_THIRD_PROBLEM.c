#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line=n*2;
    int s=n-1,k=1;
    for (int i = 1; i <= line; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        //line sesh
        if (i<n)
        {
            s--;
            k+=2;
        }
        else if(i>n)
        {
            s++;
            k-=2;
        }
        printf("\n");
    }
    
    return 0;
}