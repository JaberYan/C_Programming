#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int age[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&age[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (age[i]>age[j])
            {
                int tmp=age[i];
                age[i]=age[j];
                age[j]=tmp;
            }
            
        }
    }
    if (n%2==0)
    {
        int m=n/2;
        for (int i = m-1; i < m+1; i++)
        {
            printf("%d ",age[i]);
        }
            
    }
    else
    {
        int m=(n+1)/2;
        for (int i = m-1; i < m; i++)
        {
            printf("%d",age[i]);
        }
        
    }
    
    return 0;
}