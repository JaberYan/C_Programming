#include<stdio.h>
void fun(int i,int n)  //done
{
    printf("I love Recursion\n");
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