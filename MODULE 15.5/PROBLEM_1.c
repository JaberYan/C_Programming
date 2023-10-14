#include<stdio.h>
#include<math.h>
int abs(int a)
{
    int b=abs(a);
    return b;
}
int main()
{
    int x;
    scanf("%d",&x);
    int f=abs(x);
    printf("%d",f);
    return 0;
}