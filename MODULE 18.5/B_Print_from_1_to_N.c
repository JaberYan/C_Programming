#include<stdio.h>
void fun(int i,int n)   //done
{
    printf("%d\n",i);
    if(i==n) return;
    fun(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(1,n);
    return 0;
}