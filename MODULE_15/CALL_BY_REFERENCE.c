#include<stdio.h>
//address diye function ar kaj kora;
void fun(int *p)
{
    // printf("main ar x ar value -%d\n",*p);
    *p=500;
    // printf("p ar value -%p\n",p);
}
int main()
{
    int x=30;
    // printf("x ar value -%p\n",&x);
    printf("%d\n",x);
    fun(&x);
    printf("%d\n",x);
    return 0;
}
