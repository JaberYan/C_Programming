#include<stdio.h>

//NO RETURN+NO PARAMETER;

void fun4(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int o=x*y;
    printf("%d",o);
}
int main()
{
    fun4();
    return 0;
}