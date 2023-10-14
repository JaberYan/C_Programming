#include<stdio.h>
int main()
{
    int i,sum=0,b;
    scanf("%d",&b);
    for(i=1;i<=b;i=i+1)
    {
        sum+=i;
    }
    printf("%d\n",sum);
    
    return 0;
}