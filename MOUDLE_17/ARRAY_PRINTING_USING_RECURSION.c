#include<stdio.h>
void fun(int arr[],int n,int i)
{
    printf("%d\n",arr[i]);
    if(i==n-1) return; //base case;
    fun(arr,n,i+1);
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
    fun(arr,n,0);
    return 0;
}