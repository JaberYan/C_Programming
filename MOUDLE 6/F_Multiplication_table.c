#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 1; i <= 12; i=i+1)
    {
        int multi=a*i;
        printf("%d * %d = %d\n",a,i,multi);
    }
    
    return 0;
}