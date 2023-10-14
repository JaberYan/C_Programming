#include<stdio.h>
void fun(int i)
{
    if(i==6)
    return;
    fun(i+1);
    printf("%d\n",i);
}
int main()
{
    int i;
    scanf("%d\n",&i);
    fun(i);
    return 0;
}