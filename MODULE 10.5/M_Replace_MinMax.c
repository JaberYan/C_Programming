#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
    }
    int max=INT_MIN,min=INT_MAX,min_ind,max_ind;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
            min_ind=i;
        }
        printf("%d",min_ind);
        // if (a[i]>max)
        // {
        //     max=a[i];
        //     max_ind=i;
        // }   
    }
    // for (int i = 0; i < n; i++)
    // {
    //     max_ind=min;
    //     min_ind=max;
    //     printf("%d ",a[i]);      
    // }
    return 0;
}