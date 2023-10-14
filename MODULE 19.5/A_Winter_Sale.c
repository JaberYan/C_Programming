#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);
    float i=100*p;
    float j=100-x;
    float ans=i/j;
    printf("%0.2lf",ans);
    return 0;
}