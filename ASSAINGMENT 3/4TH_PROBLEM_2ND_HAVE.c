#include<stdio.h>

// NO RETURN+PARAMETER;

void fun3(int x,int y)
{
    int o=x/y;
    printf("%d",o);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    fun3(a,b);
    return 0;
}