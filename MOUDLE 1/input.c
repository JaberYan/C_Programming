#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("enter the number:");
    scanf("%d %f %c",&a,&b,&c);
    printf("%d + %0.2f =%c",a,b,c);
    return 0;
}