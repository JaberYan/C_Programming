#include<stdio.h>
int x=500; //gobal value ja puro program jure access thakbe;
void fun(void)
{
    // int s=100; //block ar bitore just access thakbe;
    // printf("fun ar s ar memory address -\n%p",&s);
    // printf("%d\n",x);
    printf("fun ar moddhe x ar address -%p\n",&x);
}
int main()
{
    // int s=200; //block ar bitore just sccess thakbe'
    // printf("main ar s ar memory address -\n%p\n",&s);
    // printf("%d\n",x);
    printf("main ar moddhe x ar address -%p\n",&x);
    fun();
    return 0;
}