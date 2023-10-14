#include<stdio.h>
void fun(int i)
{
    printf("%d\n",i);
    if(i==5) return;
    fun(i+1);
}
int main()
{
    int i=1;
    fun(i);
    return 0;
}