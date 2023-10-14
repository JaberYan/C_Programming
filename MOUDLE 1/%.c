#include<stdio.h>
int main()
{
    int a,b;
    char p;
    printf("enter the number:");
    scanf("%d%c %d%c",&a,&p,&b,&p);
    printf("%d%% %d%%",a,b);
    return 0;
}