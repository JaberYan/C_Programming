#include<stdio.h>

// return + no parameter;

int sum()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s=x+y;
    return s;
}
int main()
{
    int t=sum(100);
    printf("%d",t);
    return 0;
}