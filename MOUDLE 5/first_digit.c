#include<stdio.h>
int main()
{
    int X,digit;
    scanf("%d",&X);
    digit=X/1000;
    if (digit%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    
    return 0;
}