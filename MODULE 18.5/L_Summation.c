#include<stdio.h>
void summation(int arr[],int n,int i)
{
    int sum=0;
    int cnt=sum+arr[i];
    if(i==n-1) return;
    summation(arr,n,i+1);
    printf("%d",cnt);
}
int main()
{
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    }
    summation(arr,n,0);
    return 0;
}