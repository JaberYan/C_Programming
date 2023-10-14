#include<stdio.h>
int main()
{
    int a,b,minus;
    scanf("%d %d",&a,&b);
    minus=a-b;
    if (minus>=0)
    {
        printf("%d",minus);
    }
    else if (minus<0)
    {
        printf("0");
    }
    
    
    return 0;
}