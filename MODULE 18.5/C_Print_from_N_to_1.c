#include<stdio.h>
void fun(int n,int i)  //done
{
    printf("%d",n);
    if(n==i) return;
    printf(" ");
    fun(n-1,i);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n,1);
    return 0;
}