#include<stdio.h>
#include<limits.h>
int fun(int arr[],int n,int i)
{
    if (i==n)
    {
        return INT_MIN;
    }
    
    int x=fun(arr,n,i+1);
    if (x < arr[i])
    {   
        return arr[i];
    }
    else
    {
        return x;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    }
    int max=fun(arr,n,0);
    printf("%d",max);
    return 0;
}