#include<stdio.h>

//HAS RETURN+NO PARAMETER;

int fun2(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int o=x-y;
    return o;
}
int main()
{
    int j=fun2();
    printf("%d",j);
    return 0;
}