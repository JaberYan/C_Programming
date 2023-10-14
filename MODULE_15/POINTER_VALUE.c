#include<stdio.h>
int main()
{
    int x=20;
    int *ptr=&x;
    printf("%p\n",ptr);
    *ptr=500;
    printf("%d\n",x);
    int *ptr2=ptr;
    *ptr2=200;
    printf("%d\n",x);
    return 0;
}