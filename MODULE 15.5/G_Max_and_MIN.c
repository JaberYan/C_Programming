#include<stdio.h>
#include<limits.h>
void max_min(void)
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    int b;
    int max=INT_MIN,min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&b);
        if (b>max)
        {
            max=b;
        }
        if (b<min)
        {
            min=b;
        } 
    }
    printf("%d %d",min,max);
}
int main()
{
    max_min();
    return 0;
}