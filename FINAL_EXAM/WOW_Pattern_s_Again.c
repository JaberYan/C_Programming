#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for (int  i = 0; i < n; i++)
    {
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            if (i%2==0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        s--;
        k+=2;
    }
    return 0;
}