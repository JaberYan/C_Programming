#include<stdio.h>
void fun(int i)
{
    printf("%d\n",i);
    if(i==1) return; //base case;
    fun(i-1);
}
int main()
{
    int i=5;
    fun(i);
    return 0;
}