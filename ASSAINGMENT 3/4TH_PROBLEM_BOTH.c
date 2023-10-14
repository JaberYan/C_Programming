#include<stdio.h>

// HAS RETURN+PARAMETER;

int fun1(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int o=fun1(a,b);
    printf("%d",o);
    return 0;
}