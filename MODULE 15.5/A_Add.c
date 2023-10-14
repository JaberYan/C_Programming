#include<stdio.h>
int sum(int x,int y)
{
    int b=x+y;
    return b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int n=sum(a,b);
    printf("%d",n);
    return 0;
}