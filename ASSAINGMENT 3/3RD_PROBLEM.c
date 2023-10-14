#include<stdio.h>
int count_before_zero(int a[],int n)
{
    int zero=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            zero++;
        }
        else
        {
            break;
        }
    }
    return zero;
}
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
    }
    int j=count_before_zero(a,n);
    printf("%d",j);
    return 0;
}