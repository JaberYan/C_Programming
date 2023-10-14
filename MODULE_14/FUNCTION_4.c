#include<stdio.h>

//no return + parameter;

//jehetu ata no return and no parameter tai ate kunu return thakbe na tai athake function ar moddhe print korte hobe...ar jehetu etar moddhe kunu parameter newa jane na tai etar value gula function ar moddhe i nite hobe...pore sudu main function ar moddhe theke call korte hobe...

void sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    printf("%d\n",s);
}
int main()
{
    sum();
    sum();
    return 0;
}