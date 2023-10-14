#include<stdio.h>
void fun(int x)
{
    x=200;
    // printf("fun function ar address -%p\n",&x);
    // printf("%d",x);
}
int main()
{
    int x=20;
    // printf("main x ar address -%p\n",&x);
    fun(x);
    printf("%d",x);
    return 0;
}
